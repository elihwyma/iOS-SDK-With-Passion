/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <PhotoImaging/PIExportMetadataBuilder.h>

@class NSArray;

@interface PIExportVideoMetadataBuilder : PIExportMetadataBuilder

@property (copy, nonatomic, readonly) NSArray *metadataItems;

- (id)titleItem;
- (id)locationItem;
- (id)commonItemForKey:(id)arg1 string:(id)arg2;
- (id)captionItem;
- (id)creationDateItem;
- (id)videoDateFormatter;
- (id)keywordsItem;

@end
