/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDDrawableInfo.h>

#import <TSReading/Swift-Protocol.h>

@class NSObject, NSString, TSDInfoGeometry, TSKDocumentRoot, TSPObject, TSTEditingState, TSTMasterLayout, TSTTableModel, TSTTablePartitioner;

@protocol TSDContainerInfo, TSDOwningAttachment;

@interface TSTTableInfo : TSDDrawableInfo <Swift>

{
    TSTTableModel *mTableModel;
    _Bool mIsFormulaEditing;
    _Bool mHasReference;
    CDStruct_0441cfb5 mEditingCellID;
    CDStruct_0441cfb5 mPreviousEditingCellID;
    TSTTablePartitioner *mPartitioner;
    TSTMasterLayout *mMasterLayout;
    TSTEditingState *mEditingState;
}

@property (nonatomic, readonly) TSKDocumentRoot *documentRoot;
@property (nonatomic, readonly) TSTTableModel *tableModel;
@property (nonatomic) CDStruct_0441cfb5 editingCellID;
@property (nonatomic, readonly) CDStruct_0441cfb5 previousEditingCellID;
@property (nonatomic, readonly) CDStruct_5f1f7aa9 editingCellRange;
@property (nonatomic, readonly) TSTTablePartitioner *partitioner;
@property (retain, nonatomic) TSTEditingState *editingState;
@property (nonatomic) long long contentWritingDirection;
@property (nonatomic, getter=isFormulaEditing) _Bool formulaEditing;
@property (nonatomic) _Bool hasReference;
@property (nonatomic, readonly) TSTMasterLayout *masterLayout;
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

+ (id)presetKinds;
+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (_Bool)canPartition;
+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3 reservedCount:(unsigned long long)arg4;
+ (unsigned short)numberOfRowsForProtoIndex:(unsigned long long)arg1;
+ (unsigned short)numberOfColumnsForProtoIndex:(unsigned long long)arg1;
+ (id)geometryForPrototypeIndex:(long long)arg1 withCanvasPoint:(struct CGPoint)arg2;
+ (id)tablePrototypeWithIndex:(long long)arg1 context:(id)arg2 geometry:(id)arg3 styles:(id)arg4;

- (void)dealloc;
- (void)debugDump;
- (int)elementKind;
- (void)validate;
- (Class)layoutClass;
- (id)childEnumerator;
- (void)didCopy;
- (id)copyWithContext:(id)arg1;
- (void)acceptVisitor:(id)arg1;
- (Class)repClass;
- (id)childInfos;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
- (_Bool)textIsVertical;
- (id)searchForString:(id)arg1 options:(unsigned long long)arg2 onHit:(CDUnknownBlockType)arg3;
- (id)searchForAnnotationsWithHitBlock:(CDUnknownBlockType)arg1;
- (id)childCommandForReplaceAllCommand:(id)arg1;
- (id)referencedStyles;
- (void)replaceReferencedStylesUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)supportsAttachedComments;
- (id)descriptionForPasteboard;
- (Class)editorClass;
- (void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (_Bool)supportsHyperlinks;
- (void)willCopyWithOtherDrawables:(id)arg1;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (unsigned long long)chunkCountForTextureDeliveryStyle:(unsigned long long)arg1 animationFilter:(id)arg2;
- (unsigned long long)textureDeliveryStyleFromDeliveryString:(id)arg1;
- (id)textureDeliveryStylesLocalized:(_Bool)arg1 animationFilter:(id)arg2;
- (_Bool)reverseChunkingIsSupported;
- (id)descriptionForPasteboardWithSource:(id)arg1;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (_Bool)canAspectRatioLockBeChangedByUser;
- (_Bool)autoListRecognition;
- (_Bool)autoListTermination;
- (id)childCommandForApplyThemeCommand:(id)arg1;
- (id)tabularTextRepresentation;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 rows:(unsigned short)arg3 columns:(unsigned short)arg4 styles:(id)arg5;
- (void)setGeometry:(id)arg1 resizeInternal:(_Bool)arg2;
- (id)allWPStorages;
- (id)initWithContext:(id)arg1 fromSourceInfo:(id)arg2 cellRegion:(id)arg3 carrySelection:(_Bool)arg4;
- (id)initWithContext:(id)arg1 fromSourceInfo:(id)arg2 carrySelection:(_Bool)arg3;
- (void)setupTableModelForPrototypeIndex:(long long)arg1;
- (void)setGeometry:(id)arg1 resizeInternal:(_Bool)arg2 scaleFactor:(struct CGSize)arg3 shouldClearObjectPlaceholderFlag:(_Bool)arg4;
- (void)setGeometry:(id)arg1 resizeInternal:(_Bool)arg2 scaleFactor:(struct CGSize)arg3;
- (void)performBlockWithStylesheetForAddingStyles:(CDUnknownBlockType)arg1;
- (id)descriptionForExactCopy;
- (id)initForTestingWithContext:(id)arg1 rows:(unsigned short)arg2 columns:(unsigned short)arg3;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 styles:(id)arg3;
- (id)initWithContext:(id)arg1 otherTableInfo:(id)arg2;
- (void)p_didLoadRichTextPayloadTable:(id)arg1;
- (void)shiftGeometryToIncludeTableNameHeight;
- (void)shiftGeometryToExcludeTableNameHeight;
- (double)masterLayoutEffectiveTableNameHeight;
- (_Bool)isSafeToConvertToImage;
- (_Bool)isSafeToConvertToAttributedString;
- (_Bool)isSafeToConvertToText;
- (void)clearPartitioner;
- (void)scaleInfoGeometry:(struct CGSize)arg1;
- (id)mergedContainedStorages;
- (void)didReplaceTextsInStoragesWithPlaceHolderString;

@end
