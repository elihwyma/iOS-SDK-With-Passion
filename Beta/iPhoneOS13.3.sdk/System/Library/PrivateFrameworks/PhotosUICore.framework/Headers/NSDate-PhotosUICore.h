/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSDate.h>

@interface NSDate (PhotosUICore)

+ (void)px_unionStartDate:(id *)arg1 endDate:(id *)arg2 withDate:(id)arg3;
+ (void)px_unionStartDate:(id *)arg1 endDate:(id *)arg2 withDateInterval:(id)arg3;

- (_Bool)px_isSameDayAsDate:(id)arg1;
- (long long)px_yearsSinceDate:(id)arg1;
- (_Bool)px_isWithinTimeInterval:(double)arg1 sinceDate:(id)arg2;
- (_Bool)px_isBetweenDate:(id)arg1 andDate:(id)arg2;

@end
