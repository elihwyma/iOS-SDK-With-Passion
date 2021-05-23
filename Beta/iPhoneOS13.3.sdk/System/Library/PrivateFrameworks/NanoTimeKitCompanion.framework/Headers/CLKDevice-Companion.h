/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <ClockKit/CLKDevice.h>

@interface CLKDevice (Companion)

@property (nonatomic, readonly) _Bool isBridgeActive;
@property (nonatomic, readonly) _Bool isPaired;
@property (nonatomic, readonly) _Bool canCustomize;
@property (nonatomic, readonly) _Bool isRadioPhoneComplicationEnabled;
@property (nonatomic, readonly) _Bool isEcgPhoneComplicationEnabled;

+ (void)setBridgeActiveNRDevice:(id)arg1;

@end
