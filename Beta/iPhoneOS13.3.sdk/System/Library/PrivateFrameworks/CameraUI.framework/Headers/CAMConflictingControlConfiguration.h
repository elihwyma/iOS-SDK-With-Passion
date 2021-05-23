/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@interface CAMConflictingControlConfiguration : NSObject

{
    long long _desiredFlashMode;
    long long _desiredHDRMode;
    long long _flashAndHDRConflictingControl;
}

@property (nonatomic, readonly) long long desiredFlashMode;
@property (nonatomic, readonly) long long desiredHDRMode;
@property (nonatomic, readonly) long long flashAndHDRConflictingControl;

+ (void)resolveDesiredFlashMode:(long long)arg1 desiredHDRMode:(long long)arg2 primaryConflictingControl:(long long)arg3 device:(long long)arg4 toFlashMode:(long long *)arg5 HDRMode:(long long *)arg6;

- (id)init;
- (id)initWithDesiredFlashMode:(long long)arg1 desiredHDRMode:(long long)arg2 flashAndHDRConflictingControl:(long long)arg3;

@end
