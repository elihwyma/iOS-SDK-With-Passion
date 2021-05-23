/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSObject.h>

@class NSDate, NSString, NSTimeZone;

@interface _ATXAppLaunch : NSObject

{
    NSString *_bundleId;
    NSDate *_startDate;
    NSDate *_endDate;
    NSTimeZone *_timeZone;
    NSString *_reason;
}

@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic, readonly) NSTimeZone *timeZone;
@property (nonatomic, readonly) NSString *reason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)initWithBundleId:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 timeZone:(id)arg4 reason:(id)arg5;
- (_Bool)isEqualToLaunch:(id)arg1;

@end
