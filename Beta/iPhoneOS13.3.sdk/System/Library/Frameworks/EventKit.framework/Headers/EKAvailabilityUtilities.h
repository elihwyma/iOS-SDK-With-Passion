/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <Foundation/NSObject.h>

@interface EKAvailabilityUtilities : NSObject

+ (_Bool)showTypeAsBusy:(long long)arg1;
+ (long long)summarizedAvailabilityTypeForSpans:(id)arg1;
+ (_Bool)spansIncludeBusyPeriod:(id)arg1;
+ (int)CALFreeBusyTypeFromEKAvailType:(long long)arg1;
+ (id)getCALFreeBusyFromEKSpans:(id)arg1 inRange:(id)arg2;
+ (long long)_orderForType:(long long)arg1;
+ (int)leastAvailabileFreeBusyTypeForArray:(id)arg1;
+ (id)getCALFreeBusyFromResults:(id)arg1 forAttendees:(id)arg2 inRange:(id)arg3;

@end
