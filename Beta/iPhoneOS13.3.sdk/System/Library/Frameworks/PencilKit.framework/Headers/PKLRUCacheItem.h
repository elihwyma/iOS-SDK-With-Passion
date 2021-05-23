/*
 Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

#import <Foundation/NSObject.h>

@protocol NSCopying;

@interface PKLRUCacheItem : NSObject

{
    id <NSCopying> _key;
    PKLRUCacheItem *_next;
    PKLRUCacheItem *_prev;
    id _object;
    unsigned long long _cost;
}

@end
