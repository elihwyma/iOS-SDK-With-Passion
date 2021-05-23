/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection;

@protocol _DUIServerSessionDestination;

__attribute__((visibility("hidden")))
@interface _UIDruidDestinationConnection : NSObject

{
    NSXPCConnection *_connection;
    id <_DUIServerSessionDestination> _serverSession;
    unsigned int _sessionIdentifier;
    CDUnknownBlockType _connectionBlock;
    CDUnknownBlockType _dragEndBlock;
    CDUnknownBlockType _dropPerformBlock;
    CDUnknownBlockType _handOffDroppedItemsBlock;
    CDUnknownBlockType _dragPreviewProviderBlock;
    CDUnknownBlockType _itemsAddedBlock;
    long long _state;
}

@property (nonatomic) long long state;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) unsigned int sessionIdentifier;
@property (copy, nonatomic) CDUnknownBlockType connectionBlock;
@property (copy, nonatomic) CDUnknownBlockType dragPreviewProviderBlock;
@property (copy, nonatomic) CDUnknownBlockType itemsAddedBlock;
@property (copy, nonatomic) CDUnknownBlockType dropPerformBlock;
@property (copy, nonatomic) CDUnknownBlockType handOffDroppedItemsBlock;
@property (copy, nonatomic) CDUnknownBlockType dragEndBlock;

- (void)takePotentialDrop:(id)arg1;
- (void)requestVisibleItems:(CDUnknownBlockType)arg1;
- (oneway void)requestDragPreviewsForIndexSet:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)requestDropWithOperation:(unsigned long long)arg1;
- (void)sawDragEndEvent;
- (void)enableKeyboardIfNeeded;
- (oneway void)addedItemCollection:(id)arg1;
- (oneway void)performDropWithItemCollection:(id)arg1 dataProviderEndpoint:(id)arg2 visibleDroppedItems:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (oneway void)handOffDroppedItems:(id)arg1 withFence:(id)arg2;
- (oneway void)dragEnded;
- (void)dirtyItems:(id)arg1;
- (id)initWithSessionIdentifier:(unsigned int)arg1 systemPolicy:(_Bool)arg2;

@end
