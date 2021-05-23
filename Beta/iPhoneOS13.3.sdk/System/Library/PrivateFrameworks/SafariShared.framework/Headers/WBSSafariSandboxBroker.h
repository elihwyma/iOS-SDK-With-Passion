/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@protocol OS_os_log;

@interface WBSSafariSandboxBroker : NSObject

{
    int _pid;
    NSObject<OS_os_log> *_log;
    CDStruct_4c969caf _auditToken;
}

@property (nonatomic, readonly) NSObject<OS_os_log> *log;
@property (nonatomic, readonly) int pid;
@property (nonatomic, readonly) CDStruct_4c969caf auditToken;

- (void)loadLinkPresentationMetdataForMessageWithGUID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithPID:(int)arg1 auditToken:(CDStruct_4c969caf)arg2;

@end
