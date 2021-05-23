/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface INImageServiceRegistry : NSObject

{
    NSMutableDictionary *_imageServicesByServiceIdentifier;
    NSMutableArray *_prioritySortedImageServices;
}

@property (copy, nonatomic, readonly) NSArray *imageLoaders;
@property (copy, nonatomic, readonly) NSArray *imageStorageServices;
@property (copy, nonatomic, readonly) NSArray *imageServices;

+ (id)sharedInstance;

- (id)init;
- (void)registerImageService:(id)arg1;
- (void)unregisterImageService:(id)arg1;
- (void)_reprioritizeImageServices;
- (id)imageServiceForServiceIdentifier:(id)arg1;
- (id)imageLoaderForServiceIdentifier:(id)arg1;
- (id)imageStorageServiceForServiceIdentifier:(id)arg1;

@end
