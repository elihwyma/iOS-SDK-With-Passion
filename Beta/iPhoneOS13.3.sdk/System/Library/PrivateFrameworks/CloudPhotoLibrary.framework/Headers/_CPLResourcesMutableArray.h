/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface _CPLResourcesMutableArray : NSObject

{
    NSMutableDictionary *_resourcesPerType;
    NSMutableDictionary *_updatedResourcesPerType;
}

- (void)addResource:(id)arg1;
- (id)initWithResources:(id)arg1;
- (id)allResources;
- (id)reallyUpdatedResources;

@end
