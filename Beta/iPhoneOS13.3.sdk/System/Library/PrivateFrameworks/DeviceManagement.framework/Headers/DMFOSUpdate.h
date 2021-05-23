/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

#import <NSObject.h>

@class NSString;

@interface DMFOSUpdate : NSObject

{
    _Bool _isCritical;
    _Bool _restartRequired;
    _Bool _allowsInstallLater;
    NSString *_productKey;
    NSString *_humanReadableName;
    NSString *_productName;
    NSString *_version;
    NSString *_build;
    unsigned long long _downloadSize;
    unsigned long long _installSize;
}

@property (copy, nonatomic, readonly) NSString *productKey;
@property (copy, nonatomic, readonly) NSString *humanReadableName;
@property (copy, nonatomic, readonly) NSString *productName;
@property (copy, nonatomic, readonly) NSString *version;
@property (copy, nonatomic, readonly) NSString *build;
@property (nonatomic, readonly) unsigned long long downloadSize;
@property (nonatomic, readonly) unsigned long long installSize;
@property (nonatomic, readonly) _Bool isCritical;
@property (nonatomic, readonly) _Bool restartRequired;
@property (nonatomic, readonly) _Bool allowsInstallLater;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProductKey:(id)arg1 humanReadableName:(id)arg2 productName:(id)arg3 version:(id)arg4 build:(id)arg5 downloadSize:(unsigned long long)arg6 installSize:(unsigned long long)arg7 isCritical:(_Bool)arg8 restartRequired:(_Bool)arg9 allowsInstallLater:(_Bool)arg10;

@end
