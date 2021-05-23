/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@interface NUSlowMotionUtilities : NSObject

+ (id)slomoFactory;
+ (id)photosFormatsSlomoFactory;
+ (id)slowMotionVideoFromAsset:(id)arg1 rate:(float)arg2 range:(CDStruct_e83c9415)arg3 error:(out id *)arg4;
+ (id)slowMotionAudioMixFromAsset:(id)arg1 rate:(float)arg2 range:(CDStruct_e83c9415)arg3 error:(out id *)arg4;
+ (id)timeMapperForAssetDuration:(double)arg1 rate:(float)arg2 range:(CDStruct_e83c9415)arg3 error:(out id *)arg4;

@end
