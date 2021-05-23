/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <FrontBoardServices/FBSSceneParameters.h>

@class FBSDisplayConfiguration, FBSSceneClientSettings, FBSSceneSettings, FBSSceneSpecification;

@interface FBSMutableSceneParameters : FBSSceneParameters

{
    FBSDisplayConfiguration *_displayConfiguration;
}

@property (copy, nonatomic, setter=_setSpecification:) FBSSceneSpecification *specification;
@property (copy, nonatomic) FBSSceneSettings *settings;
@property (copy, nonatomic) FBSSceneClientSettings *clientSettings;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setDisplay:(id)arg1;
- (void)updateClientSettingsWithBlock:(CDUnknownBlockType)arg1;
- (void)updateSettingsWithBlock:(CDUnknownBlockType)arg1;

@end
