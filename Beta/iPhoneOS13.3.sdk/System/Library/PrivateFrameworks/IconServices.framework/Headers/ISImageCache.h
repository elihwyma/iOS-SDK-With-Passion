/*
 Image: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface ISImageCache : NSObject

{
    struct os_unfair_lock_s _lock;
    NSMutableDictionary *_imageBagsByDescriptor;
}

@property struct os_unfair_lock_s lock;
@property (retain) NSMutableDictionary *imageBagsByDescriptor;

- (id)init;
- (id)debugDescription;
- (id)imageForDescriptor:(id)arg1;
- (void)setImage:(id)arg1 forDescriptor:(id)arg2;
- (id)allImages;

@end
