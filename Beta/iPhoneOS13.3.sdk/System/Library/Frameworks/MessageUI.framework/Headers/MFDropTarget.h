/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString, UIDropInteraction, UIView;

@protocol MFDropTargetDelegate;

@interface MFDropTarget : NSObject

{
    struct {
        unsigned int respondsToCanDropDraggedItemsAtPoint;
        unsigned int respondsToDragEntered;
        unsigned int respondsToDragExited;
        unsigned int respondsToDragDidMoveToPoint;
        unsigned int respondsToDidDropItemsAtPoint;
        unsigned int respondsToDataOwner;
    } _delegateFlags;
    NSSet *_acceptableUTIs;
    UIView *_targetView;
    id <MFDropTargetDelegate> _delegate;
    UIDropInteraction *_dropInteraction;
}

@property (weak, nonatomic) id <MFDropTargetDelegate> delegate;
@property (weak, nonatomic) UIView *targetView;
@property (retain, nonatomic) UIDropInteraction *dropInteraction;
@property (copy, nonatomic) NSSet *acceptableUTIs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithView:(id)arg1 delegate:(id)arg2;
- (void)_updateDelegateFlags;
- (_Bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (long long)_dropInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (_Bool)_delegateHandlesDrops;
- (_Bool)_sessionContainsOnlyAcceptableTypeIdentifiers:(id)arg1;
- (void)_delegateDidDropItemsWithDropSession:(id)arg1;
- (void)_dropSessionEnded;
- (_Bool)_delegateCanDropItemsWithDropSession:(id)arg1;

@end
