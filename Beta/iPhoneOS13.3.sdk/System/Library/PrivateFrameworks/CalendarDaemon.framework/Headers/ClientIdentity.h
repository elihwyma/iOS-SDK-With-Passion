/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface ClientIdentity : NSObject

{
    int _pid;
    NSString *_bundleIdentifier;
    NSString *_clientName;
    NSString *_codeSigningIdentity;
    CDStruct_4c969caf _auditToken;
}

@property (nonatomic, readonly) CDStruct_4c969caf auditToken;
@property (copy, nonatomic, readonly) NSString *bundleIdentifier;
@property (copy, nonatomic, readonly) NSString *clientName;
@property (copy, nonatomic, readonly) NSString *codeSigningIdentity;
@property (nonatomic, readonly) int pid;

- (id)description;
- (id)initWithAuditToken:(CDStruct_4c969caf)arg1;

@end
