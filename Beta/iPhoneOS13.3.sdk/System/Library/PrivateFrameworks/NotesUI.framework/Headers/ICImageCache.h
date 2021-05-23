/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSObject.h>

@class ICCache, ICLRUCache;

@protocol OS_dispatch_source;

@interface ICImageCache : NSObject

{
    ICCache *_imageCache;
    ICLRUCache *_bigImageCache;
    NSObject<OS_dispatch_source> *_memoryWarningEventSource;
}

@property (retain, nonatomic) ICCache *imageCache;
@property (retain, nonatomic) ICLRUCache *bigImageCache;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *memoryWarningEventSource;

+ (double)bigImageSize;
+ (unsigned long long)maxBigImageCount;

- (id)init;
- (struct UIImage *)imageForKey:(id)arg1;
- (void)setImage:(struct UIImage *)arg1 forKey:(id)arg2;
- (void)removeImageForKey:(id)arg1;
- (void)removeAllImages;
- (void)registerForMemoryWarnings;
- (void)unregisterForMemoryWarnings;
- (void)receivedMemoryWarning;

@end
