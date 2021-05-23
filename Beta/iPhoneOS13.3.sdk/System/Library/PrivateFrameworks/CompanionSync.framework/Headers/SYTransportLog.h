/*
 Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

#import <NSObject.h>

@class NSString;

@protocol OS_os_log;

@interface SYTransportLog : NSObject

{
    NSObject<OS_os_log> *_log;
    NSString *_facility;
    NSObject<OS_os_log> *_oslog;
}

@property (copy, nonatomic) NSString *facility;
@property (nonatomic, readonly) NSObject<OS_os_log> *oslog;

+ (id)sharedInstance;

- (id)init;
- (void)logMessage:(id)arg1;
- (void)_createLog;
- (void)logMessage:(id)arg1 args:(char *)arg2;
- (void)_logOSMessage:(const char *)arg1 args:(char *)arg2 returnAddress:(void *)arg3;

@end
