/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class AVTAvatarPose, AVTCoreModelFramingModeOverrides, AVTCoreModelRowDisplayCondition, NSArray, NSString;

@interface AVTCoreModelRowOptions : NSObject

{
    _Bool _separator;
    NSString *_framingMode;
    NSArray *_presetOverrides;
    AVTCoreModelFramingModeOverrides *_framingModeOverrides;
    AVTAvatarPose *_poseOverride;
    AVTCoreModelRowDisplayCondition *_displayCondition;
    unsigned long long _displayMode;
}

@property (copy, nonatomic, readonly) NSString *framingMode;
@property (nonatomic, readonly) _Bool separator;
@property (copy, nonatomic, readonly) NSArray *presetOverrides;
@property (nonatomic, readonly) AVTCoreModelFramingModeOverrides *framingModeOverrides;
@property (copy, nonatomic, readonly) AVTAvatarPose *poseOverride;
@property (nonatomic, readonly) AVTCoreModelRowDisplayCondition *displayCondition;
@property (nonatomic, readonly) unsigned long long displayMode;

+ (unsigned long long)displayModeFromString:(id)arg1;

- (id)initWithFramingMode:(id)arg1 separatorFlag:(_Bool)arg2 presetOverrides:(id)arg3 poseOverride:(id)arg4 framingModeOverrides:(id)arg5 displayMode:(unsigned long long)arg6 displayCondition:(id)arg7;

@end
