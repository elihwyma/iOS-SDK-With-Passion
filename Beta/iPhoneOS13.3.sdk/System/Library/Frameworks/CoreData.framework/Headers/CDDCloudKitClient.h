/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSXPCConnection;

__attribute__((visibility("hidden")))
@interface CDDCloudKitClient : NSObject

{
    _Bool _interrupted;
    _Bool _invalidated;
    NSXPCConnection *_connection;
}

@property (nonatomic, readonly) NSXPCConnection *connection;
@property (nonatomic, readonly) _Bool interrupted;
@property (nonatomic, readonly) _Bool invalidated;

- (void)dealloc;
- (_Bool)_valid;
- (id)initWithMachServiceName:(id)arg1;
- (void)handleMessage:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_setInvalidated;
- (void)_setInterrupted;
- (_Bool)registerClientStore:(id)arg1 withMirroringOptions:(id)arg2 error:(id *)arg3;
- (_Bool)scheduleBackupTaskForClientStore:(id)arg1 error:(id *)arg2;

@end
