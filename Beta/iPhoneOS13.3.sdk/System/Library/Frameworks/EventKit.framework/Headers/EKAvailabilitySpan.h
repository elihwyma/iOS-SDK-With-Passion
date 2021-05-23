/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString;

@interface EKAvailabilitySpan : NSObject

{
    long long _type;
    NSDate *_startDate;
    NSDate *_endDate;
}

@property (nonatomic, readonly) long long type;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 type:(long long)arg3;

@end
