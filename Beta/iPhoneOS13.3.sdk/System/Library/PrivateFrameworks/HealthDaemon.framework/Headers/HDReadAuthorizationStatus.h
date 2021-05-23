/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDSQLitePredicate, NSDate, NSNumber, NSSet, NSString, _HKAuthorizationRecord;

@interface HDReadAuthorizationStatus : NSObject

{
    _HKAuthorizationRecord *_authorizationRecord;
    NSSet *_restrictedSourceEntities;
    NSString *_restrictedBundleIdentifier;
    NSNumber *_deletedObjectBaselineAnchor;
    NSNumber *_objectLimitAnchor;
}

@property (nonatomic, readonly) long long authorizationStatus;
@property (nonatomic, readonly) long long authorizationRequest;
@property (nonatomic, readonly) long long authorizationMode;
@property (copy, nonatomic, readonly) _HKAuthorizationRecord *authorizationRecord;
@property (copy, nonatomic, readonly) NSSet *restrictedSourceEntities;
@property (copy, nonatomic, readonly) NSString *restrictedBundleIdentifier;
@property (copy, nonatomic, readonly) NSNumber *deletedObjectBaselineAnchor;
@property (copy, nonatomic, readonly) NSNumber *objectLimitAnchor;
@property (copy, nonatomic, readonly) NSDate *objectLimitModifiedDate;
@property (nonatomic, readonly) _Bool canRead;
@property (nonatomic, readonly) _Bool isAuthorizationDetermined;
@property (copy, nonatomic, readonly) HDSQLitePredicate *authorizationPredicate;

+ (id)unrestrictedReadAuthorizationStatus;
+ (id)notDerminedReadAuthorizationStatus;

- (id)description;
- (id)initWithReadAuthorizationStatus:(long long)arg1 authorizationRequest:(long long)arg2 authorizationMode:(long long)arg3 restrictedBundleIdentifier:(id)arg4 restrictedSourceEntities:(id)arg5 deletedObjectBaselineAnchor:(id)arg6 objectLimitAnchor:(id)arg7 objectLimitModifiedDate:(id)arg8;
- (void)disableReading;
- (void)disableSharing;

@end
