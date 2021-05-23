/*
 Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

#import <Foundation/NSObject.h>

#import <SearchUI/Swift-Protocol.h>

@class NSString, SearchUIRowModel, UIView;

@protocol OS_os_transaction;

@interface SearchUIDragSource : NSObject <Swift>

{
    SearchUIRowModel *_dragObject;
    UIView *_overrideDragPreviewView;
    UIView *_dragSourceView;
    NSObject<OS_os_transaction> *_transaction;
}

@property (weak) UIView *dragSourceView;
@property (retain) NSObject<OS_os_transaction> *transaction;
@property (retain, nonatomic) SearchUIRowModel *dragObject;
@property (retain, nonatomic) UIView *overrideDragPreviewView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)dragSourceForView:(id)arg1 dragObject:(id)arg2;

- (id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;
- (id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
- (void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
- (_Bool)dragInteraction:(id)arg1 sessionAllowsMoveOperation:(id)arg2;
- (_Bool)dragInteraction:(id)arg1 sessionIsRestrictedToDraggingApplication:(id)arg2;
- (void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3;
- (id)_requiredContextIDsForDragSessionInView:(id)arg1;
- (long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2;
- (id)initWithView:(id)arg1 dragObject:(id)arg2;
- (_Bool)isMailDrag;
- (id)dragParametersForPreviewView:(id)arg1;
- (_Bool)_shouldPerformHitTestingForDragSessionInView:(id)arg1;

@end
