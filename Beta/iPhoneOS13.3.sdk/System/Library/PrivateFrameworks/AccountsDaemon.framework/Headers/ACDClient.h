/*
 Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSNumber, NSString, NSXPCConnection;

@interface ACDClient : NSObject

{
    NSXPCConnection *_connection;
    struct __CFBundle *_bundle;
    NSString *_bundleID;
    _Bool _didManuallySetBundleID;
    NSNumber *_pid;
    NSString *_localizedAppName;
    NSString *_name;
    NSMutableDictionary *_entitlementChecks;
}

@property (retain, nonatomic) NSString *bundleID;
@property (nonatomic, readonly) struct __CFBundle *bundle;
@property (nonatomic, readonly) NSString *localizedAppName;
@property (nonatomic, readonly) NSString *adamOrDisplayID;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSNumber *pid;
@property (nonatomic, readonly) NSXPCConnection *connection;

+ (id)clientWithBundleID:(id)arg1;
+ (id)_bundleForNonPlugInPID:(int)arg1;
+ (id)_bundleIDForPID:(int)arg1;
+ (id)_bundleForPID:(int)arg1;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)initWithConnection:(id)arg1;
- (_Bool)hasEntitlement:(id)arg1;
- (id)_displayNameFromLaunchServicesForPID:(int)arg1;
- (id)_displayNameFromBundleInfoDictionaryForPID:(int)arg1;

@end
