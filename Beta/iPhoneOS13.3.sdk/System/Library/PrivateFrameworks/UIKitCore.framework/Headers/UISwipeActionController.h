/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSIndexPath, NSMutableSet, NSString, UIScrollView, UISwipeActionsConfiguration, UISwipeOccurrence, UIView, _UISwipeHandler;

@protocol UISwipeActionHost, UISwipeActionHost_Internal;

@interface UISwipeActionController : NSObject <Swift>

{
    id <UISwipeActionHost> _swipeActionHost;
    unsigned long long _style;
    UISwipeActionsConfiguration *_incomingSwipeActionsConfiguration;
    UIScrollView *_containerView;
    _UISwipeHandler *_swipeHandler;
    NSMutableSet *_swipeOccurrences;
    UISwipeOccurrence *_currentSwipeOccurrence;
}

@property (retain, nonatomic) UISwipeActionsConfiguration *incomingSwipeActionsConfiguration;
@property (weak, nonatomic) id <UISwipeActionHost> swipeActionHost;
@property (weak, nonatomic) UIScrollView *containerView;
@property (retain, nonatomic) _UISwipeHandler *swipeHandler;
@property (nonatomic, readonly, getter=_internalSwipeActionHost) id <UISwipeActionHost_Internal> internalSwipeActionHost;
@property (nonatomic, readonly, getter=_prefersRTL) _Bool prefersRTL;
@property (retain, nonatomic) NSMutableSet *swipeOccurrences;
@property (weak, nonatomic) UISwipeOccurrence *currentSwipeOccurrence;
@property (nonatomic, readonly) NSIndexPath *swipedIndexPath;
@property (nonatomic, readonly) UIView *swipedItemView;
@property (nonatomic) unsigned long long style;
@property (nonatomic) _Bool swipeEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)updateLayout;
- (void)moveRowAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (id)initWithSwipeActionHost:(id)arg1 style:(unsigned long long)arg2;
- (void)resetSwipedItemAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)_swipeDirectionForLeadingEdge:(_Bool)arg1;
- (void)swipeItemAtIndexPath:(id)arg1 configuration:(id)arg2 direction:(unsigned long long)arg3 animated:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_observeScrollViewDidScroll:(id)arg1;
- (id)_existingSwipeOccurrenceForIndexPath:(id)arg1;
- (void)updateSwipedIndexPath:(id)arg1;
- (void)deleteSectionAtIndex:(unsigned long long)arg1;
- (void)deleteRowAtIndexPath:(id)arg1;
- (void)insertSectionAtIndex:(unsigned long long)arg1;
- (void)insertRowAtIndexPath:(id)arg1;
- (void)moveSectionAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (CDStruct_324b76a9)configureForSwipeDirection:(unsigned long long)arg1 configuration:(id)arg2 startingAtTouchLocation:(struct CGPoint)arg3;
- (_Bool)touchAtLocationShouldDismissSwipedItem:(struct CGPoint)arg1 isTouchUp:(_Bool)arg2;
- (void)swipeOccurrence:(id)arg1 willFinishWithDeletion:(_Bool)arg2;
- (void)swipeOccurrenceDidFinish:(id)arg1;
- (void)swipeOccurrence:(id)arg1 didChangeStateFrom:(long long)arg2;
- (_Bool)swipeHandler:(id)arg1 mayBeginSwipeAtLocation:(struct CGPoint)arg2 withProposedDirection:(unsigned long long)arg3;
- (void)swipeHandlerDidBeginSwipe:(id)arg1;
- (void)swipeHandler:(id)arg1 didGenerateSwipeWithInfo:(CDStruct_9b6dff2a)arg2 isTracking:(_Bool)arg3;
- (void)swipeHandler:(id)arg1 didConfirmSwipeWithInfo:(CDStruct_9b6dff2a)arg2;
- (struct CGRect)swipeHandlerRestingFrame:(id)arg1;

@end
