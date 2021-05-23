/*
 Image: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface MUImageReader : NSObject

+ (_Bool)hasPrivateImageMetadata:(id)arg1;
+ (id)cleanImageMetadataFromData:(id)arg1;
+ (id)_privateImageMetadataDescriptors;

- (id)_readAnnotationsFromDataProvider:(struct CGDataProvider *)arg1;
- (void)readAnnotationsFromArchivedModelData:(id)arg1 toController:(id)arg2;
- (id)_readDataFromTagAtPath:(id)arg1 inMetadata:(struct CGImageMetadata *)arg2;
- (id)_readBaseImageFromDataProvider:(struct CGDataProvider *)arg1 providerSource:(id)arg2 baseWasValid:(_Bool *)arg3;
- (_Bool)readAnnotationsFromData:(id)arg1 toController:(id)arg2;
- (_Bool)readAnnotationsFromImageAtURL:(id)arg1 toController:(id)arg2;
- (id)readArchivedModelDataFromImageData:(id)arg1;
- (id)readArchivedModelDataFromImageURL:(id)arg1;
- (id)readBaseImageFromData:(id)arg1 baseWasValid:(_Bool *)arg2;
- (id)readBaseImageFromImageAtURL:(id)arg1 baseWasValid:(_Bool *)arg2;

@end
