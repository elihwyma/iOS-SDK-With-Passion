/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/WFGenericFileContentItem.h>

@class WFFileType, WFImage;

@interface WFImageContentItem : WFGenericFileContentItem

{
    _Bool _imageIsAnimated;
    WFFileType *_preferredFileType;
}

@property (retain, nonatomic) WFFileType *preferredFileType;
@property (nonatomic, readonly) struct CGSize size;
@property (nonatomic, readonly) WFImage *image;
@property (nonatomic) _Bool imageIsAnimated;

+ (id)typeDescription;
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;
+ (id)ownedPasteboardTypes;
+ (id)itemWithSerializedItem:(id)arg1 forType:(id)arg2 named:(id)arg3;
+ (id)imageTypes;
+ (id)itemWithImage:(id)arg1 named:(id)arg2 preferredFileType:(id)arg3;

- (id)orientation;
- (id)model;
- (id)location;
- (id)width;
- (id)height;
- (id)metadata;
- (id)make;
- (_Bool)getListThumbnail:(CDUnknownBlockType)arg1 forSize:(struct CGSize)arg2;
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;
- (void)generateObjectRepresentation:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;
- (void)generateFileRepresentation:(CDUnknownBlockType)arg1 options:(id)arg2 forType:(id)arg3;
- (_Bool)canGenerateRepresentationForType:(id)arg1;
- (id)generateFileRepresentationForType:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (_Bool)isScreenshot;
- (id)copyWithName:(id)arg1 zone:(struct _NSZone *)arg2;
- (id)dateTaken;
- (_Bool)isObjectBacked;
- (id)imageFile;
- (id)generateImageFileForType:(id)arg1 includingMetadata:(_Bool)arg2 compressionQuality:(id)arg3 error:(id *)arg4;
- (_Bool)isContent;

@end
