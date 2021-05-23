/*
 Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
 */

#import <CarKit/CARInputDevice.h>

@protocol CARInputDeviceTouchpadDelegate;

@interface CARInputDeviceTouchpad : CARInputDevice

{
    _Bool _characterRecognitionSupported;
    double _sensitivity;
    unsigned long long _supportedFeedbackTypes;
    id <CARInputDeviceTouchpadDelegate> _delegate;
    struct CGSize _physicalSize;
}

@property (nonatomic) double sensitivity;
@property (weak, nonatomic) id <CARInputDeviceTouchpadDelegate> delegate;
@property (nonatomic, readonly) struct CGSize physicalSize;
@property (nonatomic, readonly) _Bool characterRecognitionSupported;
@property (nonatomic, readonly) _Bool feedbackSupported;
@property (nonatomic, readonly) unsigned long long supportedFeedbackTypes;

+ (struct CGSize)physicalSizeForTouchpadWithDigitizerProperties:(id)arg1;

- (id)description;
- (void)_setDelegate:(id)arg1;
- (void)performFeedbackOfType:(unsigned long long)arg1;
- (struct CGSize)_physicalSizeForTouchpadServiceClient:(struct __IOHIDServiceClient *)arg1;
- (_Bool)_characterRecognitionSupportedForServiceClient:(struct __IOHIDServiceClient *)arg1;
- (id)initWithServiceClient:(struct __IOHIDServiceClient *)arg1 UUID:(id)arg2 settings:(id)arg3 delegate:(id)arg4;
- (void)updateSettingsWithSettings:(id)arg1;
- (id)_initWithSupportedHapticTypes:(unsigned long long)arg1 physicalSize:(struct CGSize)arg2 characterRecognitionSupported:(_Bool)arg3 senderID:(unsigned long long)arg4 UUID:(id)arg5;

@end
