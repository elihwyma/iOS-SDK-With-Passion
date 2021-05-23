/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@interface PXPersonFaceTileImageCombiner : NSObject

{
    unsigned long long _currentGeneration;
}

+ (void)initialize;
+ (id)_generateCombinedImageFromImages:(id)arg1 context:(id)arg2;
+ (id)placeholderImageForNumberOfFaces:(unsigned long long)arg1 context:(id)arg2;

- (void)requestImageForPersons:(id)arg1 context:(id)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (void)_returnCombinedImage:(id)arg1 generation:(unsigned long long)arg2 resultHandler:(CDUnknownBlockType)arg3;

@end
