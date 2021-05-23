/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKPhotosReader.h>

@class NSMutableArray;

@interface _NTKImageListPhotosReader : NTKPhotosReader

{
    NSMutableArray *_photos;
}

- (unsigned long long)count;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)initWithResourceDirectory:(id)arg1;

@end
