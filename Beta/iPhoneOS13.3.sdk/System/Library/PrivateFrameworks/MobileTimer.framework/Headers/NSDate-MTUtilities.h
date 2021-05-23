/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <Foundation/NSDate.h>

@interface NSDate (MTUtilities)

+ (id)mtLatest:(id)arg1;
+ (id)mtNow;
+ (id)mtEarliest:(id)arg1;

- (_Bool)mtIsBeforeOrSameAsDate:(id)arg1;
- (_Bool)mtIsBeforeDate:(id)arg1;
- (_Bool)mtIsAfterDate:(id)arg1;
- (id)mtDateNearestMatchingComponents:(id)arg1;
- (_Bool)mtIsAfterOrSameAsDate:(id)arg1;

@end
