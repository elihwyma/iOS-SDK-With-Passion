/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@protocol OS_dispatch_group, UITextPasteCoordinatorDelegate;

__attribute__((visibility("hidden")))
@interface UITextPasteCoordinator : NSObject

{
    NSMutableArray *_items;
    NSObject<OS_dispatch_group> *_wait;
    id <UITextPasteCoordinatorDelegate> _delegate;
}

@property (weak, nonatomic, readonly) id <UITextPasteCoordinatorDelegate> delegate;

- (id)initWithDelegate:(id)arg1;
- (void)addItem:(id)arg1;
- (void)_determineFinished;
- (void)_finish;
- (void)setResult:(id)arg1 forItem:(id)arg2;
- (_Bool)performBlockingWait:(double)arg1;

@end
