/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/WFGenericFileContentItem.h>

@class AVAsset;

@interface WFAVAssetContentItem : WFGenericFileContentItem

@property (nonatomic, readonly) AVAsset *asset;

+ (id)typeDescription;
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (_Bool)supportedTypeMustBeDeterminedByInstance:(id)arg1;

- (id)duration;
- (id)supportedTypes;
- (id)frameRate;
- (_Bool)getListSubtitle:(CDUnknownBlockType)arg1;
- (_Bool)getListAltText:(CDUnknownBlockType)arg1;
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;
- (void)generateFileRepresentation:(CDUnknownBlockType)arg1 options:(id)arg2 forType:(id)arg3;
- (void)getPreferredFileSize:(CDUnknownBlockType)arg1;
- (id)preferredFileType;
- (_Bool)canGenerateRepresentationForType:(id)arg1;
- (id)generateExportSessionForType:(id)arg1;
- (id)metadataItemForCommonKey:(id)arg1;
- (void)generateFileRepresentation:(CDUnknownBlockType)arg1 forType:(id)arg2 metadata:(id)arg3 options:(id)arg4;

@end
