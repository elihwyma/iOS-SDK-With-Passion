/*
 Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection;

@interface SBSCardItemsController : NSObject

{
    NSString *_identifier;
    NSXPCConnection *_connection;
    _Bool _connected;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;
- (void)_invalidateConnection;
- (id)_remoteInterfaceWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)_connectToServerIfNecessary;
- (void)_noteConnectionDropped;
- (void)setCardItems:(id)arg1;
- (void)getCardItemsWithHandler:(CDUnknownBlockType)arg1;

@end
