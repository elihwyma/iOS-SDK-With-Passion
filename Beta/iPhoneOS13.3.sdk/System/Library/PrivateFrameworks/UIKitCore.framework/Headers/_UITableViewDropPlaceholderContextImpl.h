/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, NSUUID, UIDragItem;

@protocol UIDragAnimating, _UITableViewPlaceholderContextDelegate;

__attribute__((visibility("hidden")))
@interface _UITableViewDropPlaceholderContextImpl : NSObject

{
    NSString *_reuseIdentifier;
    double _rowHeight;
    CDUnknownBlockType _cellUpdateHandler;
    id <UIDragAnimating> _animator;
    NSUUID *_shadowUpdateIdentifier;
    id <_UITableViewPlaceholderContextDelegate> _delegate;
    UIDragItem *_dragItem;
}

@property (weak, nonatomic) id <_UITableViewPlaceholderContextDelegate> delegate;
@property (retain, nonatomic) UIDragItem *dragItem;
@property (retain, nonatomic) NSString *reuseIdentifier;
@property (nonatomic) double rowHeight;
@property (copy, nonatomic) CDUnknownBlockType cellUpdateHandler;
@property (retain, nonatomic, getter=_animator, setter=_setAnimator:) id <UIDragAnimating> animator;
@property (retain, nonatomic, getter=_shadowUpdateIdentifier, setter=_setShadowUpdateIdentifier:) NSUUID *shadowUpdateIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)addAnimations:(CDUnknownBlockType)arg1;
- (void)addCompletion:(CDUnknownBlockType)arg1;
- (_Bool)commitInsertionWithDataSourceUpdates:(CDUnknownBlockType)arg1;
- (_Bool)deletePlaceholder;
- (id)initWithDelegate:(id)arg1 dragItem:(id)arg2 reuseIdentifier:(id)arg3 rowHeight:(double)arg4 cellUpdateHandler:(CDUnknownBlockType)arg5;

@end
