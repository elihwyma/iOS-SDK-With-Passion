/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDShapeInfo.h>

#import <TSReading/Swift-Protocol.h>

@class NSObject, NSString, TSDInfoGeometry, TSPObject, TSWPColumns, TSWPLineHintCollection, TSWPPadding, TSWPShapeStyle, TSWPStorage;

@protocol TSDContainerInfo, TSDOwningAttachment;

@interface TSWPShapeInfo : TSDShapeInfo <Swift>

{
    TSWPStorage *_containedStorage;
    _Bool _textUserEditable;
    TSWPLineHintCollection *mLineHints;
}

@property (retain, nonatomic) TSWPStorage *containedStorage;
@property (nonatomic, readonly) _Bool displaysInstructionalText;
@property (nonatomic, readonly) NSString *instructionalText;
@property (nonatomic) _Bool shrinkTextToFit;
@property (nonatomic) _Bool textIsVertical;
@property (nonatomic) _Bool allowsLastLineTruncation;
@property (nonatomic) unsigned int maxLineCount;
@property (nonatomic) unsigned int verticalAlignment;
@property (nonatomic) long long contentWritingDirection;
@property (retain, nonatomic) TSWPPadding *padding;
@property (retain, nonatomic) TSWPColumns *columns;
@property (nonatomic, readonly) TSWPShapeStyle *tswpShapeStyle;
@property (retain, nonatomic) TSWPLineHintCollection *lineHints;
@property (nonatomic, getter=isTextUserEditable) _Bool textUserEditable;
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

+ (void)setDefaultInstructionalText:(id)arg1;

- (void)dealloc;
- (Class)layoutClass;
- (id)childEnumerator;
- (id)copyWithContext:(id)arg1;
- (void)acceptVisitor:(id)arg1;
- (Class)repClass;
- (id)childInfos;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
- (id)presetKind;
- (unsigned long long)chunkCountForTextureDeliveryStyle:(unsigned long long)arg1 byGlyphStyle:(int)arg2 animationFilter:(id)arg3;
- (struct CGPoint)transformableObjectAnchorPoint;
- (Class)editorClass;
- (void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (id)textureDeliveryStylesLocalized:(_Bool)arg1 animationFilter:(id)arg2;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4;
- (Class)styleClass;
- (_Bool)supportsTextInset;
- (_Bool)supportsShrinkTextToFit;
- (void)processSelectedStoragesWithStatisticsController:(id)arg1;
- (id)stylesForCopyStyle;
- (id)propertyMapForNewPreset;
- (id)styleIdentifierTemplateForNewPreset;
- (struct CGAffineTransform)autosizedTransformForInfoGeometry:(id)arg1 size:(struct CGSize)arg2;
- (struct CGPoint)autosizePositionOffset;
- (_Bool)autoListRecognition;
- (_Bool)autoListTermination;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 pathSource:(id)arg4 wpStorage:(id)arg5;
- (double)pOffsetForVerticalAlignment:(struct CGSize)arg1;
- (double)pOffsetForParagraphAlignment:(struct CGSize)arg1;
- (struct CGPoint)autosizePositionOffsetForGeometry:(id)arg1 size:(struct CGSize)arg2;
- (_Bool)p_hasContentForRange:(struct _NSRange)arg1;
- (unsigned long long)p_chunkCountForByBulletGroup;
- (unsigned long long)p_chunkCountForByBullet;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 wpStorage:(id)arg4;
- (void)fixPositionOfImportedAutosizedShape;
- (id)commandForPasteStyleWithContext:(id)arg1 pasteboardStyles:(id)arg2;
- (_Bool)p_hasListLabelOrContentForParagraphIndex:(unsigned long long)arg1;
- (id)commandForTransformingByTransform:(struct CGAffineTransform)arg1 context:(id)arg2 transformedObjects:(id)arg3 inBounds:(struct CGRect)arg4;

@end
