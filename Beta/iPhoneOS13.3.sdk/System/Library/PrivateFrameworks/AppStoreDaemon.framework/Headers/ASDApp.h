/*
 Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

#import <Foundation/NSObject.h>

#import <AppStoreDaemon/Swift-Protocol.h>

@class ASDProgress, NSError, NSNumber, NSProgress, NSString, NSUUID;

@interface ASDApp : NSObject <Swift>

{
    _Bool _familyShared;
    NSString *_artistName;
    NSString *_bundleID;
    NSString *_bundlePath;
    NSString *_bundleShortVersion;
    NSString *_bundleVersion;
    NSString *_localizedName;
    long long _storeExternalVersionID;
    NSString *_storeCohort;
    NSNumber *_storeFront;
    long long _storeItemID;
    long long _downloaderDSID;
    long long _familyID;
    long long _purchaserDSID;
    NSError *_installError;
    NSUUID *_installID;
    NSProgress *_progress;
    NSString *_updateBuyParams;
    long long _watchApplicationMode;
    long long _extensions;
    long long _status;
    ASDProgress *_remoteProgress;
}

@property (retain) NSString *artistName;
@property (retain) NSString *bundlePath;
@property (retain) NSString *bundleShortVersion;
@property (retain) NSString *bundleVersion;
@property (retain) NSString *localizedName;
@property long long storeExternalVersionID;
@property long long storeItemID;
@property (retain) NSString *storeCohort;
@property (retain) NSNumber *storeFront;
@property long long downloaderDSID;
@property long long familyID;
@property long long purchaserDSID;
@property long long extensions;
@property long long status;
@property (retain) NSProgress *progress;
@property (retain) ASDProgress *remoteProgress;
@property (retain) NSString *updateBuyParams;
@property long long watchApplicationMode;
@property (readonly) NSString *bundleID;
@property (readonly, getter=hasMessagesExtension) _Bool messasgesExtension;
@property (readonly, getter=isArcadeOpenable) _Bool arcadeOpenable;
@property (readonly, getter=isBetaApp) _Bool betaApp;
@property (readonly, getter=isFamilyShared) _Bool familyShared;
@property (readonly, getter=isInstalled) _Bool installed;
@property (readonly, getter=isLaunchProhibited) _Bool launchProhibited;
@property (readonly, getter=isOcelot) _Bool ocelot;
@property (readonly, getter=isOpenable) _Bool openable;
@property (readonly, getter=isPlaceholder) _Bool placeholder;
@property (readonly, getter=isStoreApp) _Bool storeApp;
@property (readonly, getter=isSystemApp) _Bool systemApp;
@property (readonly, getter=isUpdateAvailable) _Bool updateAvailable;
@property (readonly) NSError *installError;
@property (readonly) NSUUID *installID;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBundleID:(id)arg1;
- (_Bool)isEqualToApp:(id)arg1;

@end
