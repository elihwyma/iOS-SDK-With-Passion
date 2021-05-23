/*
 Image: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

#import <Foundation/NSObject.h>

@interface AKCDPFactory : NSObject

+ (id)context;
+ (id)recoveryControllerWithContext:(id)arg1;
+ (id)cdpIDMSRecordPRKKey;
+ (id)cdpIDMSRecordMIDKey;
+ (id)cdpErrorDomain;
+ (id)contextWithAuthResults:(id)arg1;
+ (id)stateControllerWithContext:(id)arg1;
+ (id)followUpRepairContext;
+ (id)followUpController;
+ (id)accountRecoveryControllerWithPresentingViewController:(id)arg1;
+ (id)cdpStateUIController;

@end
