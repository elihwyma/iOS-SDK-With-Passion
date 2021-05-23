/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

#import <AppStoreDaemon/Swift-Protocol.h>

@class NSDictionary, NSNumber, NSString;

@interface ASDRepairOptions : NSObject <Swift>

{
    _Bool _forceRevoke;
    _Bool _forceUpsell;
    int _fairplayStatus;
    NSString *_bundleID;
    NSString *_bundlePath;
    NSNumber *_accountDSID;
    long long _claimStyle;
    unsigned long long _exitReason;
    NSDictionary *_relaunchOptions;
}

@property (nonatomic) _Bool forceRevoke;
@property (nonatomic) _Bool forceUpsell;
@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSString *bundlePath;
@property (nonatomic, readonly) NSNumber *accountDSID;
@property (nonatomic, readonly) long long claimStyle;
@property (nonatomic) unsigned long long exitReason;
@property (nonatomic) int fairplayStatus;
@property (copy, nonatomic) NSDictionary *relaunchOptions;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBundleID:(id)arg1;
- (id)initWithBundleID:(id)arg1 accountIdentifier:(id)arg2 claimStyle:(long long)arg3;
- (id)initWithBundlePath:(id)arg1;

@end
