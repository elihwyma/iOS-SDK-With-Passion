/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
 */

#import <NSDate.h>

@interface NSDate (OFNSDateExtensions)

+ (id)dateFromString:(id)arg1;
+ (id)dateFromISO8601String:(id)arg1;
+ (id)dateFromRFC1123String:(id)arg1;
+ (id)dateFromTWTimeString:(id)arg1;

- (id)shortDescription;
- (id)shortDescriptionWithTime;
- (id)shortWeekDescription;
- (id)shortDescriptionSinceNow;

@end
