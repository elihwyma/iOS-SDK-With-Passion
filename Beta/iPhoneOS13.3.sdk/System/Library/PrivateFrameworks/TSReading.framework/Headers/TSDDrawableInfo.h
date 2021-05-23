/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSPObject.h>

@class NSMutableDictionary, NSObject, NSString, NSURL, TSDDefaultPartitioner, TSDExteriorTextWrap, TSDInfoGeometry, TSPLazyReference, TSSPropertySetChangeDetails;

@protocol TSDAnnotationHosting, TSDContainerInfo, TSDOwningAttachment;

@interface TSDDrawableInfo : TSPObject

{
    TSDInfoGeometry *mGeometry;
    NSObject<TSDContainerInfo> *mParentInfo;
    TSPLazyReference *mParentInfoReference;
    _Bool mLocked;
    _Bool mAspectRatioLocked;
    TSSPropertySetChangeDetails *mChanges;
    TSDExteriorTextWrap *mExteriorTextWrap;
    TSPObject<TSDOwningAttachment> *mOwningAttachment;
    TSDDefaultPartitioner *mDefaultPartitioner;
    NSURL *mHyperlinkURL;
    id <TSDAnnotationHosting> mComment;
    NSString *mAccessibilityDescription;
    NSMutableDictionary *mAccessibilityDescriptions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, getter=isLocked) _Bool locked;
@property (nonatomic, readonly, getter=isLockable) _Bool lockable;
@property (nonatomic, readonly) _Bool supportsAttachedComments;
@property (nonatomic) _Bool aspectRatioLocked;
@property (nonatomic, readonly) _Bool canSizeBeChangedIncrementally;
@property (copy, nonatomic) TSDExteriorTextWrap *exteriorTextWrap;
@property (copy, nonatomic) NSURL *hyperlinkURL;
@property (nonatomic, readonly) _Bool supportsHyperlinks;
@property (copy, nonatomic) NSString *accessibilityDescription;
@property (retain, nonatomic) NSMutableDictionary *accessibilityDescriptions;
@property (copy, nonatomic) id <TSDAnnotationHosting> comment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) _Bool matchesObjectPlaceholderGeometry;
@property (copy, nonatomic) TSDInfoGeometry *geometry;
@property (nonatomic) NSObject<TSDContainerInfo> *parentInfo;
@property (nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
@property (nonatomic, readonly) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property (nonatomic, readonly, getter=isFloatingAboveText) _Bool floatingAboveText;
@property (nonatomic, readonly, getter=isAnchoredToText) _Bool anchoredToText;
@property (nonatomic, readonly, getter=isInlineWithText) _Bool inlineWithText;
@property (nonatomic, readonly, getter=isAttachedToBodyText) _Bool attachedToBodyText;
@property (nonatomic, readonly) _Bool isUserModifiable;
@property (nonatomic, readonly) Class editorClass;

+ (_Bool)canPartition;
+ (void)setShouldPartitionByDefault:(_Bool)arg1;

- (void)dealloc;
- (int)elementKind;
- (id)objectForProperty:(int)arg1;
- (Class)layoutClass;
- (void)didCopy;
- (id)copyWithContext:(id)arg1;
- (struct CGAffineTransform)transformInRoot;
- (void)clearBackPointerToParentInfoIfNeeded:(id)arg1;
- (Class)repClass;
- (_Bool)isThemeContent;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
- (float)floatValueForProperty:(int)arg1;
- (_Bool)containsProperty:(int)arg1;
- (void)coalesceChanges:(id)arg1;
- (void)beginCollectingChanges;
- (id)endCollectingChanges;
- (id)searchForAnnotationsWithHitBlock:(CDUnknownBlockType)arg1;
- (id)boxedObjectForProperty:(int)arg1;
- (int)intValueForProperty:(int)arg1;
- (double)doubleValueForProperty:(int)arg1;
- (double)CGFloatValueForProperty:(int)arg1;
- (id)presetKind;
- (void)willChangeProperty:(int)arg1;
- (void)performBlockWithTemporaryLayout:(CDUnknownBlockType)arg1;
- (struct CGAffineTransform)computeLayoutFullTransform;
- (id)containingGroup;
- (unsigned long long)chunkCountForTextureDeliveryStyle:(unsigned long long)arg1 byGlyphStyle:(int)arg2 animationFilter:(id)arg3;
- (id)descriptionForPasteboard;
- (struct CGPoint)transformableObjectAnchorPoint;
- (void)willChangeProperties:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (struct CGAffineTransform)computeFullTransform;
- (struct CGAffineTransform)fullTransformInRoot;
- (id)partitioner;
- (void)willCopyWithOtherDrawables:(id)arg1;
- (_Bool)canAnchor;
- (_Bool)canChangeWrapType;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)animationFilters;
- (unsigned long long)chunkCountForTextureDeliveryStyle:(unsigned long long)arg1 animationFilter:(id)arg2;
- (unsigned long long)textureDeliveryStyleFromDeliveryString:(id)arg1;
- (id)textureDeliveryStylesLocalized:(_Bool)arg1 animationFilter:(id)arg2;
- (_Bool)reverseChunkingIsSupported;
- (id)descriptionForPasteboardWithSource:(id)arg1;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (id)transformedGeometryWithTransform:(struct CGAffineTransform)arg1 inBounds:(struct CGRect)arg2;
- (void)setInsertionCenterPosition:(struct CGPoint)arg1;

@end
