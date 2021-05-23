/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSString;

@protocol CSAdjunctListModelDelegate, SBFActionProviding;

@interface CSAdjunctListModel : NSObject

{
    NSMutableDictionary *_identifiersToItems;
    NSMutableSet *_pendingActions;
    _Bool _suspended;
    id <SBFActionProviding> _contentActionProvider;
    id <CSAdjunctListModelDelegate> _delegate;
}

@property (weak, nonatomic) id <CSAdjunctListModelDelegate> delegate;
@property (weak, nonatomic) id <SBFActionProviding> contentActionProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)resumeItemHandling;
- (void)suspendItemHandling;
- (void)_replayPendingChanges;
- (_Bool)_actionIsInRelevantSlot:(id)arg1;
- (_Bool)_handleLockScreenContentAction:(id)arg1;
- (void)_handleLockScreenContentActionInvalidation:(id)arg1;
- (void)_handleLockScreenContentActionAddition:(id)arg1;
- (id)_itemForAction:(id)arg1;
- (id)_createItemForAction:(id)arg1;
- (void)_removeItemForAction:(id)arg1;
- (_Bool)handlesActionWithClass:(Class)arg1;
- (_Bool)handleAction:(id)arg1 forProvider:(id)arg2;

@end
