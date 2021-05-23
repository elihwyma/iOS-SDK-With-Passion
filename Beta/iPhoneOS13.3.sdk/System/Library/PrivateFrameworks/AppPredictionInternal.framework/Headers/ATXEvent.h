/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSDate;

@protocol NSSecureCoding;

@interface ATXEvent : NSObject

{
    NSObject<NSSecureCoding> *_event;
    NSDate *_startDate;
    NSDate *_endDate;
}

@property (nonatomic, readonly) NSObject<NSSecureCoding> *event;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;

+ (void)joinLaunchEvents:(id)arg1 withVisits:(id)arg2 block:(CDUnknownBlockType)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToEvent:(id)arg1;
- (id)initWithEvent:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;

@end
