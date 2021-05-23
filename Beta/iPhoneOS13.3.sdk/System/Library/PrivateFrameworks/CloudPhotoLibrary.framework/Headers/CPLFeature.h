/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@interface CPLFeature : NSObject

+ (id)featureWithName:(id)arg1;

- (_Bool)disableFeatureInStore:(id)arg1 error:(id *)arg2;
- (_Bool)enableFeatureInStore:(id)arg1 error:(id *)arg2;
- (_Bool)handleScopeWhenFeatureIsDisabled:(id)arg1 scopeType:(long long)arg2 store:(id)arg3 error:(id *)arg4;
- (_Bool)shouldDisableScopeWhenFeatureIsDisabled:(id)arg1;

@end
