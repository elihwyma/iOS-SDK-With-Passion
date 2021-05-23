/*
 Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface HMPredicateUtilities : NSObject

+ (_Bool)validatePredicate:(id)arg1;
+ (id)notificationTriggersInPredicate:(id)arg1;
+ (id)rewritePredicateForClient:(id)arg1 home:(id)arg2;
+ (id)rewritePredicateForDaemon:(id)arg1 characteristicIsInvalid:(_Bool *)arg2;
+ (_Bool)containsPresenceEvents:(id)arg1;
+ (_Bool)areOnlyHourAndMinuteSet:(id)arg1;

@end
