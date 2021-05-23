/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

#import <AppStoreDaemon/Swift-Protocol.h>

@class NSDate, NSNumber, NSString;

@interface ASDAppUsageStats : NSObject <Swift>

{
    NSString *_bundleID;
    NSString *_bundleVersion;
    NSDate *_endDate;
    long long _eventTime;
    NSNumber *_evid;
    NSNumber *_itemID;
    NSString *_itemName;
    NSDate *_lastEventEndDate;
    NSString *_launchReason;
    NSDate *_startDate;
    long long _usageTime;
    long long _usageCount;
}

@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *bundleVersion;
@property (copy, nonatomic) NSDate *endDate;
@property (nonatomic) long long eventTime;
@property (copy, nonatomic) NSNumber *evid;
@property (copy, nonatomic) NSNumber *itemID;
@property (copy, nonatomic) NSString *itemName;
@property (copy, nonatomic) NSDate *lastEventEndDate;
@property (copy, nonatomic) NSString *launchReason;
@property (copy, nonatomic) NSDate *startDate;
@property (nonatomic) long long usageTime;
@property (nonatomic) long long usageCount;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_formatTimeInternal:(long long)arg1;

@end
