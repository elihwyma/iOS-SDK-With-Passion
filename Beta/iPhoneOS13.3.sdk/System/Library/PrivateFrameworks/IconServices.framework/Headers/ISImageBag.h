/*
 Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface ISImageBag : NSObject

{
    struct os_unfair_lock_s _lock;
    NSMutableDictionary *_imagesByScale;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain) NSMutableDictionary *imagesByScale;
@property struct os_unfair_lock_s lock;
@property (copy, readonly) NSArray *images;

+ (id)imageBagWithResourcesNamed:(id)arg1 fromBundle:(id)arg2;
+ (id)imageBagWithResourcesNamed:(id)arg1 fromBundle:(id)arg2 subdirectory:(id)arg3;
+ (id)imageBagWithResourcesNamed:(id)arg1 directory:(id)arg2;

- (id)init;
- (id)imageForSize:(struct CGSize)arg1 scale:(double)arg2;
- (id)initWithImages:(id)arg1;
- (void)insertImage:(id)arg1;
- (id)imagesForScale:(double)arg1;

@end
