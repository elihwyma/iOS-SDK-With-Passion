/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

#import <AppStoreDaemon/Swift-Protocol.h>

@class NSNumber, NSString;

@interface ASDRepairApplicationRequestOptions : NSObject <Swift>

{
    NSString *_bundleID;
    NSNumber *_accountDSID;
    long long _claimStyle;
    unsigned long long _exitReason;
}

@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSNumber *accountDSID;
@property (nonatomic, readonly) long long claimStyle;
@property (nonatomic) unsigned long long exitReason;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBundleID:(id)arg1;
- (id)initWithBundleID:(id)arg1 accountIdentifier:(id)arg2 claimStyle:(long long)arg3;

@end
