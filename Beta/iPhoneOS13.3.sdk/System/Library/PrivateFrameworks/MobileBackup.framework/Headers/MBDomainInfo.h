/*
 Image: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MBDomainInfo : NSObject

{
    _Bool _systemApp;
    _Bool _enabled;
    _Bool _restricted;
    NSString *_domainName;
    unsigned long long _remoteSize;
    unsigned long long _localSize;
}

@property (nonatomic, readonly, getter=isAppDomain) _Bool appDomain;
@property (nonatomic, getter=isSystemApp) _Bool systemApp;
@property (nonatomic, readonly, getter=isCameraRollDomain) _Bool cameraRollDomain;
@property (retain, nonatomic) NSString *domainName;
@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) unsigned long long size;
@property (nonatomic) unsigned long long remoteSize;
@property (nonatomic) unsigned long long localSize;
@property (nonatomic, getter=isEnabled) _Bool enabled;
@property (nonatomic, getter=isRestricted) _Bool restricted;

+ (_Bool)supportsSecureCoding;
+ (id)domainNameForBundleID:(id)arg1;
+ (id)domainInfoWithName:(id)arg1 systemApp:(_Bool)arg2 remoteSize:(unsigned long long)arg3 localSize:(unsigned long long)arg4 enabled:(_Bool)arg5 restricted:(_Bool)arg6;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomainName:(id)arg1 systemApp:(_Bool)arg2 remoteSize:(unsigned long long)arg3 localSize:(unsigned long long)arg4 enabled:(_Bool)arg5 restricted:(_Bool)arg6;

@end
