/*
 Image: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
 */

#import <Foundation/NSObject.h>

@interface BFFOnBoardingAssetManager : NSObject

+ (id)sharedManager;
+ (id)appropriateAvailableLanguageForCurrentLanguage;
+ (_Bool)shouldUseWorldwideAssetForLanguage:(id)arg1 feature:(long long)arg2;
+ (long long)currentAssetDeviceClass;
+ (id)appropriateAvailableLanguageForPreferredLanguages:(id)arg1 regionCode:(id)arg2;
+ (_Bool)shouldUseWorldwideAssetForPreferredLanguages:(id)arg1 language:(id)arg2 feature:(long long)arg3;
+ (_Bool)hasWorldwideAsset:(long long)arg1;

- (void)retrieveMovieForFeature:(long long)arg1 language:(id)arg2 useWorldwide:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)retrieveMovieForFeature:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)movieURLForAsset:(id)arg1;
- (void)downloadAsset:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)retriveAssetForFeature:(long long)arg1 language:(id)arg2 useWorldwide:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)assetTypeForCurrentDevice;
- (id)featureKey;
- (id)assetFeatureValueForFeature:(long long)arg1;
- (id)assetQueryForFeature:(long long)arg1 language:(id)arg2 useWorldwide:(_Bool)arg3 useCatalog:(_Bool)arg4;
- (void)purgeAssets:(id)arg1;
- (id)placeholderImageNameForFeature:(long long)arg1;
- (id)placeholderImageNameForFeature:(long long)arg1 language:(id)arg2;
- (void)retrieveMovieForFeature:(long long)arg1 language:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)purgeFeatureMoviesWithCompletion:(CDUnknownBlockType)arg1;
- (void)purgeFeatureMoviesExceptLanguage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)purgeMovieForFeature:(long long)arg1 language:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)placeholderImageForFeature:(long long)arg1;

@end
