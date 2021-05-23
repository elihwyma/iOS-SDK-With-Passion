/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <ContentKit/WFGenericFileContentItem.h>

@class MPMediaItem, NSString;

@interface WFMPMediaContentItem : WFGenericFileContentItem

@property (nonatomic, readonly) MPMediaItem *mediaItem;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *artist;
@property (nonatomic, readonly) NSString *albumTitle;

+ (id)typeDescription;
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)outputTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)filterDescription;
+ (id)pluralFilterDescription;
+ (_Bool)hasLibrary;
+ (void)runQuery:(id)arg1 withItems:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (_Bool)isAvailableOnPlatform:(long long)arg1;

- (id)assetURL;
- (_Bool)getListSubtitle:(CDUnknownBlockType)arg1;
- (_Bool)getListAltText:(CDUnknownBlockType)arg1;
- (_Bool)getListThumbnail:(CDUnknownBlockType)arg1 forSize:(struct CGSize)arg2;
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;
- (void)getPreferredFileSize:(CDUnknownBlockType)arg1;
- (id)additionalRepresentationsForSerialization;
- (id)preferredFileType;

@end
