/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSString, NSUndoManager;

@protocol PUEditingExtensionUndoButtonHost;

@interface PUEditingExtensionUndoAdapter : NSObject

{
    id <PUEditingExtensionUndoButtonHost> _buttonHost;
    NSUndoManager *_undoManager;
}

@property (nonatomic, readonly) id <PUEditingExtensionUndoButtonHost> buttonHost;
@property (retain, nonatomic) NSUndoManager *undoManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)_updateButtonState;
- (void)performUndo;
- (void)performRedo;
- (id)initWithButtonHost:(id)arg1;
- (void)_registerForUndoManagerNotifications:(id)arg1;
- (void)_unregisterForUndoManagerNotifications:(id)arg1;

@end
