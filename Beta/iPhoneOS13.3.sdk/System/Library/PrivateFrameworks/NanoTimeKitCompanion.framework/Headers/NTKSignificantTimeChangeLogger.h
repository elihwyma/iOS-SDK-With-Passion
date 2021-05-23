/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@interface NTKSignificantTimeChangeLogger : NSObject

+ (id)sharedInstance;
+ (void)beginLogging;

- (id)init;
- (void)_startObserving;
- (void)_handleNotification:(id)arg1;
- (void)_logNotificationReceiptWithName:(id)arg1;

@end
