/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

#import <AppStoreDaemon/Swift-Protocol.h>

@class NSArray, NSDate, NSNumber, NSString;

@interface ASDAppEvent : NSObject <Swift>

{
    _Bool _hasBeenPosted;
    _Bool _isBeta;
    NSString *_accountID;
    NSString *_bundleID;
    NSString *_bundleVersion;
    NSString *_cohort;
    NSString *_deviceVendorID;
    long long _duration;
    long long _foregroundUsage;
    NSArray *_foregroundUsageEvents;
    long long _count;
    NSDate *_date;
    long long _eventSubtype;
    NSNumber *_eventTime;
    long long _eventType;
    NSNumber *_evid;
    NSNumber *_itemID;
    NSString *_itemName;
    NSString *_shortVersion;
    NSNumber *_startTime;
    NSNumber *_storefront;
    NSString *_weekStartDate;
}

@property (copy, nonatomic) NSString *accountID;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *bundleVersion;
@property (copy, nonatomic) NSString *cohort;
@property (copy, nonatomic) NSString *deviceVendorID;
@property (nonatomic) long long duration;
@property (nonatomic) long long foregroundUsage;
@property (copy, nonatomic) NSArray *foregroundUsageEvents;
@property (nonatomic) long long count;
@property (copy, nonatomic) NSDate *date;
@property (nonatomic) long long eventSubtype;
@property (copy, nonatomic) NSNumber *eventTime;
@property (nonatomic) long long eventType;
@property (copy, nonatomic) NSNumber *evid;
@property (nonatomic) _Bool hasBeenPosted;
@property (nonatomic) _Bool isBeta;
@property (copy, nonatomic) NSNumber *itemID;
@property (copy, nonatomic) NSString *itemName;
@property (copy, nonatomic) NSString *shortVersion;
@property (copy, nonatomic) NSNumber *startTime;
@property (copy, nonatomic) NSNumber *storefront;
@property (copy, nonatomic) NSString *weekStartDate;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
