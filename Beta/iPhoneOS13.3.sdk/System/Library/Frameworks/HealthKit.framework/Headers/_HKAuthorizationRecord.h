/*
 Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

#import <Foundation/NSObject.h>

#import <HealthKit/Swift-Protocol.h>

@class NSDate;

@interface _HKAuthorizationRecord : NSObject <Swift>

{
    long long _status;
    long long _request;
    long long _mode;
    NSDate *_anchorLimitModifiedDate;
}

@property (nonatomic) long long status;
@property (nonatomic, readonly) long long request;
@property (nonatomic, readonly) long long mode;
@property (copy, nonatomic, readonly) NSDate *anchorLimitModifiedDate;

+ (_Bool)supportsSecureCoding;
+ (id)recordWithStatus:(long long)arg1 request:(long long)arg2 mode:(long long)arg3 anchorLimitModifiedDate:(id)arg4;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)sharingEnabled;
- (id)_deepCopy;
- (id)initWithAuthorizationStatus:(long long)arg1 authorizationRequest:(long long)arg2 authorizationMode:(long long)arg3 anchorLimitModifiedDate:(id)arg4;
- (_Bool)requestedSharing;
- (_Bool)requestedReading;
- (_Bool)deniedSharing;
- (_Bool)deniedReading;
- (_Bool)readingEnabled;
- (_Bool)isCompatibleStatus:(long long)arg1;
- (id)recordWithReadingDisabled;
- (id)recordWithSharingDisabled;

@end
