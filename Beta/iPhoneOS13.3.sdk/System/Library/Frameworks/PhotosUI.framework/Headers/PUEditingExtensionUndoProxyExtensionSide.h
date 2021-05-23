/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSString, NSXPCConnection;

@protocol PUEditingExtensionUndoTarget;

@interface PUEditingExtensionUndoProxyExtensionSide : NSObject

{
    id <PUEditingExtensionUndoTarget> _target;
    NSXPCConnection *_connection;
}

@property (nonatomic, readonly) NSXPCConnection *connection;
@property (weak, nonatomic) id <PUEditingExtensionUndoTarget> target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithEndpoint:(id)arg1;
- (id)remoteObject;
- (void)performUndo;
- (void)performRedo;
- (void)setShowUndoRedo:(_Bool)arg1;
- (void)setUndoEnabled:(_Bool)arg1 redoEnabled:(_Bool)arg2;

@end
