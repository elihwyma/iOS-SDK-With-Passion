/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class CPLRUDictionary;

@interface SUImageCache : NSObject

{
    CPLRUDictionary *_dictionary;
}

- (id)init;
- (void)dealloc;
- (id)initWithMaximumCapacity:(long long)arg1;
- (void)removeAllCachedImages;
- (void)addImage:(id)arg1 forURL:(id)arg2 dataProvider:(id)arg3;
- (id)imageForURL:(id)arg1 dataProvider:(id)arg2;

@end
