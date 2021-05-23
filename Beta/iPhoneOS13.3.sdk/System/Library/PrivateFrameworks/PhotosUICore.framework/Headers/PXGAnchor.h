/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSString, PXGLayout;

@protocol PXGAnchorDelegate;

@interface PXGAnchor : NSObject

{
    struct {
        _Bool visibleRectOriginForProposedVisibleRectForLayout;
    } _delegateRespondsTo;
    _Bool _needsUpdate;
    _Bool _autoInvalidated;
    id <PXGAnchorDelegate> _delegate;
    id _context;
    PXGLayout *_layout;
    long long _type;
    long long _priority;
    NSArray *_spriteReferences;
    NSArray *_spriteRects;
    unsigned long long _referencingOptions;
    unsigned long long _edges;
    unsigned long long _scrollPosition;
    NSDate *_date;
    NSArray *_constraints;
    CDUnknownBlockType _customOffset;
    struct CGSize _contentSize;
    struct CGRect _visibleRect;
    struct UIEdgeInsets _padding;
}

@property (weak, nonatomic, readonly) PXGLayout *layout;
@property (nonatomic) long long type;
@property (nonatomic) long long priority;
@property (nonatomic) struct CGRect visibleRect;
@property (nonatomic) struct CGSize contentSize;
@property (copy, nonatomic) NSArray *spriteReferences;
@property (copy, nonatomic) NSArray *spriteRects;
@property (nonatomic) unsigned long long referencingOptions;
@property (nonatomic) unsigned long long edges;
@property (nonatomic) struct UIEdgeInsets padding;
@property (nonatomic) unsigned long long scrollPosition;
@property (retain, nonatomic) NSDate *date;
@property (copy, nonatomic) NSArray *constraints;
@property (copy, nonatomic) CDUnknownBlockType customOffset;
@property (nonatomic) _Bool needsUpdate;
@property (nonatomic, readonly, getter=isAutoInvalidated) _Bool autoInvalidated;
@property (nonatomic, readonly) unsigned long long anchoredContentEdges;
@property (nonatomic, readonly) _Bool shouldFaultInContentAtAnchoredContentEdges;
@property (nonatomic, readonly) _Bool isScrollingAnimationAnchor;
@property (nonatomic, readonly) _Bool canBeReused;
@property (weak, nonatomic) id <PXGAnchorDelegate> delegate;
@property (retain, nonatomic) id context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *diagnosticDescription;

- (id)init;
- (void)invalidate;
- (id)initWithLayout:(id)arg1;
- (void)adjustReferencedSpriteIndexesWithChangeDetails:(id)arg1 appliedToLayout:(id)arg2;
- (id)autoInvalidate;
- (struct CGRect)adjustVisibleRect:(struct CGRect)arg1;
- (unsigned int)anchoredSpriteIndexInLayout:(id)arg1;
- (void)enumerateAllSpriteReferencesUsingBlock:(CDUnknownBlockType)arg1;
- (id)copyWithLayout:(id)arg1;
- (void)enumerateSpritesWithEnumerationOptions:(unsigned long long)arg1 referencingOptions:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)_enumerateSpriteConstraintsUsingBlock:(CDUnknownBlockType)arg1;

@end
