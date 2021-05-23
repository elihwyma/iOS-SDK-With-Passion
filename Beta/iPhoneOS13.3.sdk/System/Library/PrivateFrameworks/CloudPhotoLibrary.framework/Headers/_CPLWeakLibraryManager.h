/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class CPLLibraryManager;

__attribute__((visibility("hidden")))
@interface _CPLWeakLibraryManager : NSObject

{
    CPLLibraryManager *_weakLibraryManager;
}

@property (weak) CPLLibraryManager *weakLibraryManager;

- (id)initWithLibraryManager:(id)arg1;

@end
