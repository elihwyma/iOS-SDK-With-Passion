/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface SXAnalyticsEvent : NSObject

{
    NSDate *_startDate;
    NSDate *_endDate;
}

@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;

- (id)init;
- (id)description;
- (void)determineEndDate;

@end
