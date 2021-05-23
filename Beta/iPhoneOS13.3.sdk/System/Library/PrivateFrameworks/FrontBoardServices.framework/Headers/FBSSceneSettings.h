/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

@class BSSettings, FBSDisplayConfiguration, FBSDisplayIdentity, NSArray, NSSet, NSString;

@interface FBSSceneSettings : NSObject

{
    FBSDisplayConfiguration *_displayConfiguration;
    struct CGRect _frame;
    double _level;
    long long _interfaceOrientation;
    _Bool _foreground;
    BSSettings *_otherSettings;
    BSSettings *_transientLocalSettings;
    _Bool _prefersProcessTaskSuspensionWhileSceneForeground;
    long long _isOccluded;
    _Bool _occluded;
    _Bool _occludedHasBeenCalculated;
    NSSet *_ignoreOcclusionReasons;
    NSArray *_occlusions;
}

@property (copy, nonatomic, readonly) FBSDisplayIdentity *displayIdentity;
@property (copy, nonatomic, readonly) FBSDisplayConfiguration *displayConfiguration;
@property (nonatomic, readonly) struct CGRect frame;
@property (nonatomic, readonly) double level;
@property (nonatomic, readonly) long long interfaceOrientation;
@property (nonatomic, readonly, getter=isForeground) _Bool foreground;
@property (nonatomic, readonly, getter=isBackgrounded) _Bool backgrounded;
@property (copy, nonatomic, readonly) NSArray *occlusions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)settings;
+ (_Bool)_isMutable;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithSettings:(id)arg1;
- (struct CGRect)bounds;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (_Bool)isOccluded;
- (id)otherSettings;
- (id)transientLocalSettings;
- (id)ignoreOcclusionReasons;
- (id)_descriptionBuilderWithMultilinePrefix:(id)arg1 debug:(_Bool)arg2;
- (_Bool)isIgnoringOcclusions;
- (_Bool)prefersProcessTaskSuspensionWhileSceneForeground;
- (void)setPrefersProcessTaskSuspensionWhileSceneForeground:(_Bool)arg1;

@end
