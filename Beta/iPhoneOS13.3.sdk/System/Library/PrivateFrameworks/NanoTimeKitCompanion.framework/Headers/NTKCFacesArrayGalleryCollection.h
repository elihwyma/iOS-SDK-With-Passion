/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/NTKCGalleryCollection.h>

@class NSArray;

@interface NTKCFacesArrayGalleryCollection : NTKCGalleryCollection

{
    NSArray *_faces;
}

@property (retain, nonatomic) NSArray *faces;

- (id)faceAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfFaces;
- (id)initWithTitle:(id)arg1 faces:(id)arg2;
- (unsigned long long)indexOfFace:(id)arg1;

@end
