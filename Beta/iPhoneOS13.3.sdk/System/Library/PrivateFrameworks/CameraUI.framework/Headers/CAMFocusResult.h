/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@interface CAMFocusResult : NSObject

{
    _Bool _performingContrastDetection;
    _Bool _contrastBasedFocusDidStart;
    _Bool _contrastBasedFocusDidEnd;
    _Bool _deviceSupportsFocus;
    long long _focusMode;
    struct CGPoint _pointOfInterest;
}

@property (nonatomic, readonly, getter=isPerformingContrastDetection) _Bool performingContrastDetection;
@property (nonatomic, readonly) struct CGPoint pointOfInterest;
@property (nonatomic, readonly) long long focusMode;
@property (nonatomic, readonly) _Bool contrastBasedFocusDidStart;
@property (nonatomic, readonly) _Bool contrastBasedFocusDidEnd;
@property (nonatomic, readonly) _Bool deviceSupportsFocus;

- (id)description;
- (id)initWithMode:(long long)arg1 pointOfInterest:(struct CGPoint)arg2 performingContrastDetection:(_Bool)arg3 contrastBasedFocusDidStart:(_Bool)arg4 contrastBasedFocusDidEnd:(_Bool)arg5 deviceSupportsFocus:(_Bool)arg6;

@end
