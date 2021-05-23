/*
 Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

#import <Foundation/NSObject.h>

@class CKContainerID, NSString;

__attribute__((visibility("hidden")))
@interface CKDAppContainerTuple : NSObject

{
    _Bool _useZoneWidePCS;
    _Bool _bypassPCSEncryption;
    _Bool _forceEnableReadOnlyManatee;
    _Bool _wantsSiloedContext;
    NSString *_applicationBundleID;
    NSString *_sourceApplicationBundleID;
    CKContainerID *_containerID;
    NSString *_applicationContainerPath;
    NSString *_personaID;
    NSString *_containerEncryptionServiceName;
    unsigned long long _mmcsEncryptionSupport;
}

@property (nonatomic) unsigned long long mmcsEncryptionSupport;
@property (nonatomic, readonly) NSString *applicationBundleID;
@property (nonatomic, readonly) NSString *sourceApplicationBundleID;
@property (nonatomic, readonly) CKContainerID *containerID;
@property (nonatomic, readonly) NSString *applicationContainerPath;
@property (nonatomic, readonly) NSString *personaID;
@property (nonatomic) _Bool useZoneWidePCS;
@property (nonatomic) _Bool bypassPCSEncryption;
@property (nonatomic) _Bool forceEnableReadOnlyManatee;
@property (retain, nonatomic) NSString *containerEncryptionServiceName;
@property (nonatomic) _Bool wantsSiloedContext;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)CKPropertiesDescription;
- (id)initWithApplicationBundleID:(id)arg1 sourceApplicationBundleID:(id)arg2 containerID:(id)arg3 personaID:(id)arg4;
- (id)initWithApplicationBundleID:(id)arg1 sourceApplicationBundleID:(id)arg2 applicationContainerPath:(id)arg3 containerID:(id)arg4 personaID:(id)arg5;
- (id)initWithApplicationBundleID:(id)arg1 containerID:(id)arg2 personaID:(id)arg3;

@end
