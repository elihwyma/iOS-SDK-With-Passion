/*
 Image: /System/Library/Frameworks/Security.framework/Security
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection;

@interface SecEscrowRequest : NSObject

{
    NSXPCConnection *_connection;
}

@property (retain) NSXPCConnection *connection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)request:(id *)arg1;

- (void)dealloc;
- (id)initWithConnection:(id)arg1;
- (id)fetchRequestWaitingOnPasscode:(id *)arg1;
- (_Bool)resetAllRequests:(id *)arg1;
- (unsigned long long)storePrerecordsInEscrow:(id *)arg1;
- (_Bool)triggerEscrowUpdate:(id)arg1 error:(id *)arg2;
- (id)fetchStatuses:(id *)arg1;
- (_Bool)pendingEscrowUpload:(id *)arg1;
- (_Bool)cachePrerecord:(id)arg1 serializedPrerecord:(id)arg2 error:(id *)arg3;
- (id)fetchPrerecord:(id)arg1 error:(id *)arg2;

@end
