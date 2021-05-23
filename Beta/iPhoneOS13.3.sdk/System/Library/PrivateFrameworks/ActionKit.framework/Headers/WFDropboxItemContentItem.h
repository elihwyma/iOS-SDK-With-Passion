/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <ContentKit/WFGenericFileContentItem.h>

@interface WFDropboxItemContentItem : WFGenericFileContentItem

+ (id)typeDescription;
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;
+ (_Bool)isAvailableOnPlatform:(long long)arg1;

- (id)metadata;
- (id)outputTypes;
- (_Bool)getListSubtitle:(CDUnknownBlockType)arg1;
- (_Bool)getListAltText:(CDUnknownBlockType)arg1;
- (_Bool)getListThumbnail:(CDUnknownBlockType)arg1 forSize:(struct CGSize)arg2;
- (void)generateObjectRepresentation:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;
- (void)generateFileRepresentation:(CDUnknownBlockType)arg1 options:(id)arg2 forType:(id)arg3;
- (void)getPreferredFileExtension:(CDUnknownBlockType)arg1;
- (void)getPreferredFileSize:(CDUnknownBlockType)arg1;
- (id)richListTitle;
- (_Bool)hasStringOutput;
- (_Bool)canEncodeWithCoder:(id)arg1;
- (id)overrideFilename;
- (id)representedFileType;
- (id)representedFilename;

@end
