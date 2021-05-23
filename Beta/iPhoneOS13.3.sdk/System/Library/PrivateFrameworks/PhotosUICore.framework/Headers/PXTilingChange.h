/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, PXTilingLayout;

@interface PXTilingChange : NSObject

{
    NSMutableArray *_events;
    PXTilingLayout *_initialLayout;
    NSArray *_compositionInvalidationContexts;
    struct CGSize _initialReferenceSize;
    struct UIEdgeInsets _initialContentInset;
}

@property (nonatomic, readonly, getter=isIdentity) _Bool identity;
@property (nonatomic, readonly) PXTilingLayout *initialLayout;
@property (nonatomic, readonly) struct CGSize initialReferenceSize;
@property (nonatomic, readonly) struct UIEdgeInsets initialContentInset;
@property (nonatomic, readonly) NSArray *events;
@property (copy, nonatomic, readonly) NSArray *compositionInvalidationContexts;
@property (nonatomic, readonly) PXTilingLayout *fromLayout;
@property (nonatomic, readonly) PXTilingLayout *toLayout;
@property (nonatomic, readonly) struct CGSize fromReferenceSize;
@property (nonatomic, readonly) struct CGSize toReferenceSize;
@property (nonatomic, readonly) struct UIEdgeInsets fromContentInset;
@property (nonatomic, readonly) struct UIEdgeInsets toContentInset;
@property (nonatomic, readonly) _Bool coordinateSpaceDidChange;
@property (nonatomic, readonly) NSArray *invalidationContexts;

- (id)init;
- (id)description;
- (void)addEvent:(id)arg1;
- (void)recordLayout:(id)arg1;
- (void)recordReferenceSize:(struct CGSize)arg1;
- (void)recordContentInset:(struct UIEdgeInsets)arg1;
- (void)recordCompositionInvalidationContexts:(id)arg1;
- (id)defaultAnimationOptionsForTilingController:(id)arg1;

@end
