/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSMutableSet, NSUndoManager;

@interface TSKPopoverUndoObserver : NSObject

{
    NSUndoManager *mUndoManager;
    NSMutableSet *mPopoverBasedViewControllers;
    NSMutableSet *mPopoverControllers;
}

@property (retain, nonatomic) NSUndoManager *observedUndoManager;

+ (id)sharedObserver;

- (id)init;
- (void)dealloc;
- (void)addPopoverController:(id)arg1;
- (void)removePopoverController:(id)arg1;
- (void)addPopoverBasedViewController:(id)arg1;
- (void)removePopoverBasedViewController:(id)arg1;
- (void)undoManagerWillUndo:(id)arg1;
- (void)undoManagerWillRedo:(id)arg1;

@end
