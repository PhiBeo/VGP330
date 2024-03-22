#pragma once

#include <SpringEngine/Inc/SpringEngine.h>

class GameState : public SpringEngine::AppState
{
public:
	~GameState() = default;
	void Initialize() override;
	void Terminate() override;
	void Update(const float deltaTime) override; 
	void Render() override;
	void DebugUI() override;

private:
	void UpdateCameraControl(float deltaTime);

	SpringEngine::Graphics::Camera mCamera;
	SpringEngine::Graphics::DirectionalLight mDirectionalLight;
	SpringEngine::Graphics::StandardEffect mStandardEffect;
	SpringEngine::Graphics::TerrainEffect mTerrainEffect;
	SpringEngine::Graphics::ShadowEffect mShadowEffect;

	SpringEngine::Graphics::RenderGroup mPaladin;
	SpringEngine::Graphics::RenderGroup mSwat;
	SpringEngine::Graphics::RenderObject mGround;
	SpringEngine::Graphics::Terrain mTerrain;

	SpringEngine::Math::Vector3 mSwatPosition;
	SpringEngine::Math::Vector3 mPaladinPosition;;
};