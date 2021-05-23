/*
 Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

#import <Foundation/NSObject.h>

@class ACAccountStore, NSData, NSString;

@interface MSMSPlatform : NSObject

{
    _Bool _isPerfLoggingEnabled;
    NSData *_pushToken;
    ACAccountStore *_accountStore;
}

@property (retain, nonatomic) ACAccountStore *accountStore;
@property (nonatomic) _Bool isPerfLoggingEnabled;
@property (retain, nonatomic) NSData *pushToken;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)thePlatform;

- (id)init;
- (id)OSVersion;
- (id)UDID;
- (id)socketOptions;
- (Class)deletePluginClass;
- (void)didDetectUnrecoverableCondition;
- (id)pushTokenForPersonID:(id)arg1;
- (_Bool)shouldEnableNewFeatures;
- (id)contentURLForPersonID:(id)arg1;
- (_Bool)isPerformanceLoggingEnabled;
- (_Bool)shouldLogAtLevel:(int)arg1;
- (void)logFacility:(int)arg1 level:(int)arg2 format:(id)arg3 args:(char *)arg4;
- (void)logFile:(const char *)arg1 func:(const char *)arg2 line:(int)arg3 facility:(int)arg4 level:(int)arg5 format:(id)arg6 args:(char *)arg7;
- (id)fullNameFromFirstName:(id)arg1 lastName:(id)arg2;
- (id)pathMediaStreamDir;
- (Class)publisherPluginClass;
- (Class)subscriberPluginClass;
- (id)hardwareString;
- (id)OSString;
- (id)appBundleInfoString;
- (_Bool)policyMayUpload;
- (_Bool)policyMayDownload;
- (id)baseURLForPersonID:(id)arg1;
- (id)authTokenForPersonID:(id)arg1;
- (id)theDaemon;
- (struct __CFString *)_facilityStringForFacility:(int)arg1;
- (void)_rereadDefaults;
- (Class)pluginClass;
- (id)stringForSysctlKey:(id)arg1;
- (_Bool)_mayPerformFileTransfer;
- (id)_accountForPersonID:(id)arg1;
- (_Bool)personIDUsesProductionPushEnvironment:(id)arg1;

@end
