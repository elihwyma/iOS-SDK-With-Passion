/*
 Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

#import <MobileTimer/Swift-Protocol.h>

@class NSDate, NSDictionary, NSString, NSUUID;

@protocol MTTimerIntentSupport <Swift>

@property (nonatomic, readonly) NSUUID *timerID;
@property (nonatomic, readonly) unsigned long long state;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) double remainingTime;
@property (nonatomic, readonly) NSDate *lastModifiedDate;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSDictionary *siriContext;
@property (nonatomic, readonly) long long type;

@end
