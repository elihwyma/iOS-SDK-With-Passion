/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

#import <AppStoreDaemon/Swift-Protocol.h>

@class NSNumber, NSString;

@interface ASDPurgeableApp : NSObject <Swift>

{
    _Bool _systemApp;
    NSString *_bundleID;
    NSString *_purgeableReason;
    long long _staticDiskUsage;
    NSNumber *_storeItemID;
}

@property (retain, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *purgeableReason;
@property (nonatomic) long long staticDiskUsage;
@property (copy, nonatomic) NSNumber *storeItemID;
@property (nonatomic, getter=isSystemApp) _Bool systemApp;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
