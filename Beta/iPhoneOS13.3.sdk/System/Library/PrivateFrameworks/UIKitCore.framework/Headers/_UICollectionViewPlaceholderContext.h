/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSIndexPath, NSString, NSUUID, UIDragItem, _UIDropAnimationHandlers;

@protocol _UICollectionViewPlaceholderContextDelegate;

__attribute__((visibility("hidden")))
@interface _UICollectionViewPlaceholderContext : NSObject

{
    NSUUID *_shadowUpdateIdentifier;
    NSString *_reuseIdentifier;
    NSIndexPath *_originalInsertionIndexPath;
    CDUnknownBlockType _cellUpdateHandler;
    _UIDropAnimationHandlers *_animationHandlers;
    id <_UICollectionViewPlaceholderContextDelegate> _delegate;
    UIDragItem *_dragItem;
}

@property (weak, nonatomic) id <_UICollectionViewPlaceholderContextDelegate> delegate;
@property (retain, nonatomic) UIDragItem *dragItem;
@property (retain, nonatomic) _UIDropAnimationHandlers *animationHandlers;
@property (retain, nonatomic) NSUUID *shadowUpdateIdentifier;
@property (retain, nonatomic) NSString *reuseIdentifier;
@property (retain, nonatomic) NSIndexPath *originalInsertionIndexPath;
@property (copy, nonatomic) CDUnknownBlockType cellUpdateHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)addAnimations:(CDUnknownBlockType)arg1;
- (void)addCompletion:(CDUnknownBlockType)arg1;
- (id)initWithOriginalInsertionIndexPath:(id)arg1 dragItem:(id)arg2 reuseIdentifier:(id)arg3 delegate:(id)arg4 cellUpdateHandler:(CDUnknownBlockType)arg5;
- (_Bool)commitInsertionWithDataSourceUpdates:(CDUnknownBlockType)arg1;
- (_Bool)deletePlaceholder;
- (void)setNeedsCellUpdate;

@end
