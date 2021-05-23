/*
 Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

#import <PassKitCore/PKImage.h>

@interface PKImage (NanoPassKit)

- (id)resizedImageToCover:(struct CGSize)arg1;
- (id)resizedImageToFit:(struct CGSize)arg1;
- (id)npkImageByMemoryMappingDataWithTemporaryFilePrefix:(id)arg1;
- (id)resizedImageWithSize:(struct CGSize)arg1 shouldCover:(_Bool)arg2;

@end
