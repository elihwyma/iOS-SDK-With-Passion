/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <FrontBoardServices/FBSSceneSettings.h>

@class NSArray;

@interface FBSMutableSceneSettings : FBSSceneSettings

@property (copy, nonatomic) NSArray *occlusions;
@property (nonatomic) struct CGRect frame;
@property (nonatomic) double level;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic, getter=isForeground) _Bool foreground;
@property (nonatomic, getter=isBackgrounded) _Bool backgrounded;

+ (_Bool)_isMutable;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)setDisplayConfiguration:(id)arg1;
- (id)otherSettings;
- (void)setOccluded:(_Bool)arg1;
- (void)_setDisplayConfiguration:(id)arg1;
- (id)transientLocalSettings;
- (id)ignoreOcclusionReasons;

@end
