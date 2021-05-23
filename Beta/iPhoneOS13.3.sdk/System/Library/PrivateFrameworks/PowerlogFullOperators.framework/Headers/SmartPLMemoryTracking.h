/*
 Image: /System/Library/PrivateFrameworks/PowerlogFullOperators.framework/PowerlogFullOperators
 */

#import <NSObject.h>

@class PLEntryNotificationOperatorComposition, PLSmartPLService;

@interface SmartPLMemoryTracking : NSObject

{
    PLSmartPLService *_operator;
    PLEntryNotificationOperatorComposition *_memoryTrackingNotification;
}

@property (weak) PLSmartPLService *operator;
@property (retain) PLEntryNotificationOperatorComposition *memoryTrackingNotification;

+ (id)defaults;

- (void)startWithOperator:(id)arg1;
- (void)handleMemoryTracking:(id)arg1;

@end
