/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class NSDate, NSError;

@interface HKCloudSyncObserverStatus : NSObject <Swift>

{
    _Bool _syncEnabled;
    NSDate *_lastPullDate;
    NSDate *_lastPushDate;
    NSDate *_restoreCompletionDate;
    NSError *_errorRequiringUserAction;
}

@property (nonatomic) _Bool syncEnabled;
@property (copy, nonatomic) NSDate *lastPullDate;
@property (copy, nonatomic) NSDate *lastPushDate;
@property (copy, nonatomic) NSDate *restoreCompletionDate;
@property (copy, nonatomic) NSError *errorRequiringUserAction;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
