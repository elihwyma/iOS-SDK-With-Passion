/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <Foundation/NSObject.h>

@class NSData, NSFileWrapper, NSString, NSTextAttachmentView, UIImage, UIView;

@interface NSTextAttachment : NSObject

{
    NSData *_data;
    NSString *_uti;
    NSString *_cacheKey;
    struct CGRect _bounds;
    double _layoutPadding;
    struct {
        unsigned int _allowsTextAttachmentView:1;
        unsigned int _embeddingType:4;
        unsigned int _standaloneAlignment:3;
        unsigned int _allocatesTextContainer:1;
    } _taFlags;
    NSFileWrapper *_fileWrapper;
    UIImage *_image;
    NSTextAttachmentView *_wrapperView;
}

@property (retain) UIView *contentView;
@property (copy, nonatomic) NSData *contents;
@property (copy, nonatomic) NSString *fileType;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) struct CGRect bounds;
@property (retain, nonatomic) NSFileWrapper *fileWrapper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (_Bool)supportsSecureCoding;
+ (id)imageCache;
+ (Class)textAttachmentViewProviderClassForFileType:(id)arg1;
+ (void)registerTextAttachmentViewProviderClass:(Class)arg1 forFileType:(id)arg2;
+ (Class)textAttachmentClassForFileType:(id)arg1;
+ (void)registerTextAttachmentClass:(Class)arg1 forFileType:(id)arg2;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_cacheKey;
- (id)_image;
- (id)attachmentCell;
- (double)lineLayoutPadding;
- (_Bool)usesTextAttachmentView;
- (id)viewProviderForParentView:(id)arg1 characterIndex:(unsigned long long)arg2 layoutManager:(id)arg3;
- (void)placeView:(id)arg1 withFrame:(struct CGRect)arg2 inParentView:(id)arg3 characterIndex:(unsigned long long)arg4 layoutManager:(id)arg5;
- (id)imageForBounds:(struct CGRect)arg1 textContainer:(id)arg2 characterIndex:(unsigned long long)arg3;
- (long long)standaloneAlignment;
- (_Bool)_allocatesTextContainer;
- (struct CGRect)attachmentBoundsForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2 glyphPosition:(struct CGPoint)arg3 characterIndex:(unsigned long long)arg4;
- (long long)embeddingType;
- (id)_imageForUTI_iOS:(id)arg1;
- (void)setEmbeddingType:(long long)arg1;
- (void)setStandaloneAlignment:(long long)arg1;
- (void)setAllowsTextAttachmentView:(_Bool)arg1;
- (void)_setAllocatesTextContainer:(_Bool)arg1;
- (id)initWithData:(id)arg1 ofType:(id)arg2;
- (void)_invalidateWrapperView;
- (_Bool)allowsTextAttachmentView;
- (id)initWithFileWrapper:(id)arg1;
- (void)setLineLayoutPadding:(double)arg1;
- (Class)textAttachmentViewProviderClass;
- (void)detachView:(id)arg1 fromParentView:(id)arg2;
- (void)setDrawingBounds:(struct CGRect)arg1;
- (struct CGRect)drawingBounds;

@end
