/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class CPBitmapStore;

__attribute__((visibility("hidden")))
@interface UIStatusBarCache : NSObject

{
    CPBitmapStore *_store;
    _Bool _writeable;
}

@property (nonatomic, readonly, getter=isWriteable) _Bool writeable;

+ (id)sharedInstance;

- (id)init;
- (id)imageNamed:(id)arg1 forGroup:(id)arg2 withScale:(double)arg3;
- (void)removeImagesInGroup:(id)arg1;
- (void)cacheImage:(id)arg1 named:(id)arg2 forGroup:(id)arg3;

@end
