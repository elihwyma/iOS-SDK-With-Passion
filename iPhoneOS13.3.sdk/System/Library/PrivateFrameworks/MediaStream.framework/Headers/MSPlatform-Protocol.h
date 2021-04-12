//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class MSMediaStreamDaemon, NSData, NSDictionary, NSString, NSURL;

@protocol MSPlatform <NSObject>
- (MSMediaStreamDaemon *)theDaemon;
- (NSString *)authTokenForPersonID:(NSString *)arg1;
- (NSURL *)baseURLForPersonID:(NSString *)arg1;
- (NSDictionary *)socketOptions;
- (BOOL)policyMayDownload;
- (BOOL)policyMayUpload;
- (NSString *)appBundleInfoString;
- (NSString *)OSString;
- (NSString *)hardwareString;
- (NSString *)UDID;
- (Class)subscriberPluginClass;
- (Class)publisherPluginClass;
- (NSString *)pathMediaStreamDir;
- (NSString *)fullNameFromFirstName:(NSString *)arg1 lastName:(NSString *)arg2;
// - (void)logFile:(const char )arg1 func:(const char )arg2 line:(int)arg3 facility:(int)arg4 level:(int)arg5 format:(NSString *)arg6 args:(struct __va_list_tag [1])arg7;
// - (void)logFacility:(int)arg1 level:(int)arg2 format:(NSString *)arg3 args:(struct __va_list_tag [1])arg4;
- (BOOL)shouldLogAtLevel:(int)arg1;

@optional
- (BOOL)isPerformanceLoggingEnabled;
- (NSURL *)contentURLForPersonID:(NSString *)arg1;
- (BOOL)shouldEnableNewFeatures;
- (NSData *)pushToken;
- (NSData *)pushTokenForPersonID:(NSString *)arg1;
- (BOOL)policyMaySendDelete;
- (void)didDetectUnrecoverableCondition;
- (Class)deletePluginClass;
@end

