/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDMediaInfo.h>

#import <TSReading/Swift-Protocol.h>

@class NSObject, NSString, TSDBezierPath, TSDImageAdjustments, TSDInfoGeometry, TSDMaskInfo, TSDMediaStyle, TSPData, TSPObject;

@protocol TSDContainerInfo, TSDOwningAttachment;

@interface TSDImageInfo : TSDMediaInfo <Swift>

{
    TSPData *mImageData;
    TSPData *mThumbnailImageData;
    TSPData *mOriginalImageData;
    _Bool mInterpretsUntaggedImageDataAsGeneric;
    TSDImageAdjustments *mImageAdjustments;
    TSPData *mAdjustedImageData;
    TSPData *mThumbnailAdjustedImageData;
    TSPData *mEnhancedImageData;
    TSDMediaStyle *mStyle;
    TSDMaskInfo *mMaskInfo;
    TSDBezierPath *mInstantAlphaPath;
    TSDBezierPath *mTracedPath;
    struct CGSize mNaturalSize;
}

@property (retain, nonatomic) TSPData *imageData;
@property (retain, nonatomic) TSPData *thumbnailImageData;
@property (retain, nonatomic) TSPData *originalImageData;
@property (nonatomic) _Bool interpretsUntaggedImageDataAsGeneric;
@property (nonatomic, readonly) TSDMediaStyle *imageStyle;
@property (retain, nonatomic) TSDMaskInfo *maskInfo;
@property (retain, nonatomic) TSDBezierPath *instantAlphaPath;
@property (copy, nonatomic) TSDImageAdjustments *imageAdjustments;
@property (retain, nonatomic) TSPData *adjustedImageData;
@property (retain, nonatomic) TSPData *thumbnailAdjustedImageData;
@property (retain, nonatomic) TSPData *enhancedImageData;
@property (nonatomic, readonly) TSDBezierPath *tracedPath;
@property (nonatomic) struct CGSize naturalSize;
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
+ (void)adjustIncomingImageGeometry:(id)arg1 maskGeometry:(id)arg2 forImageData:(id)arg3 maskedWithInstantAlphaPath:(id)arg4 withNaturalSize:(struct CGSize)arg5 forTargetImageGeometry:(id)arg6 withTargetMaskGeometry:(id)arg7;
+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3 reservedCount:(unsigned long long)arg4;
+ (id)bootstrapPropertyMapForPresetIndex:(unsigned long long)arg1 inTheme:(id)arg2 alternate:(int)arg3;

- (void)dealloc;
- (_Bool)isValid;
- (id)style;
- (void)setStyle:(id)arg1;
- (_Bool)isOpaque;
- (struct CGSize)originalSize;
- (id)objectForProperty:(int)arg1;
- (id)mediaFileType;
- (_Bool)isPDF;
- (Class)layoutClass;
- (id)copyWithContext:(id)arg1;
- (void)acceptVisitor:(id)arg1;
- (Class)repClass;
- (id)childInfos;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
- (void)setExteriorTextWrap:(id)arg1;
- (id)presetKind;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (struct CGAffineTransform)computeFullTransform;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (id)imageDatasForReducingFileSizeWithAssociatedHints;
- (struct CGSize)targetSizeForImageData:(id)arg1 associatedHint:(id)arg2;
- (Class)styleClass;
- (_Bool)isMasked;
- (struct CGSize)defaultOriginalSize;
- (id)copyWithContext:(id)arg1 style:(id)arg2;
- (id)geometryWithMask;
- (id)i_thumbnailForImageData:(id)arg1;
- (id)defaultMaskInfoWithContext:(id)arg1;
- (id)defaultMaskInfo;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 imageData:(id)arg4 originalImageData:(id)arg5;
- (id)mediaDisplayName;
- (struct CGSize)rawDataSize;
- (_Bool)maskCanBeReset;
- (id)updatedMaskInfoGeometryForImageDraggedBy:(struct CGPoint)arg1;
- (struct CGPoint)centerForReplacingWithNewMedia;
- (void)updateGeometryToReplaceMediaInfo:(id)arg1;

@end
