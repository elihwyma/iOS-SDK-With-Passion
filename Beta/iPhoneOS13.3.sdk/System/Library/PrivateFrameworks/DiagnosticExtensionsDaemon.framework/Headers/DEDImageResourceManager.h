/*
 Image: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, ResourceLoader;

@interface DEDImageResourceManager : NSObject

{
    ResourceLoader *_loader;
    NSMutableDictionary *_imageCache;
}

@property (retain) ResourceLoader *loader;
@property (retain) NSMutableDictionary *imageCache;

+ (id)sharedInstance;

- (void)asynchronousDataFromURL:(id)arg1 key:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (id)cachedImageFromKey:(id)arg1;

@end
