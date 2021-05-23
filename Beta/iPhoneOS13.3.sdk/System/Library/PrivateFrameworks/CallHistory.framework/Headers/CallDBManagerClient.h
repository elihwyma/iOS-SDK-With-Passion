/*
 Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

#import <CallHistory/CallDBManager.h>

@class NSXPCConnection;

__attribute__((visibility("hidden")))
@interface CallDBManagerClient : CallDBManager

{
    NSXPCConnection *_helperConnection;
    id _syncHelperReadyNotificationRef;
}

@property (retain) NSXPCConnection *helperConnection;
@property (retain) id syncHelperReadyNotificationRef;

- (id)tempDBLocation:(unsigned char *)arg1;
- (void)handlePermanentCreated;
- (void)moveCallsFromTempDatabase;
- (id)permDBLocation:(unsigned char *)arg1;
- (void)pokeSyncHelperToInitDB;
- (_Bool)willMoveCallsFromTempDatabase;
- (void)createHelperConnection;
- (_Bool)validatePermDatabase;
- (void)createPermanent;
- (void)createTemporary;
- (_Bool)validateTempDatabase;

@end
