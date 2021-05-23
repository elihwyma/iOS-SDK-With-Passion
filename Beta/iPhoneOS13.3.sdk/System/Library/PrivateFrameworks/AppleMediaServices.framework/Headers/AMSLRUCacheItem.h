/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <AppleMediaServices/AMSDoubleLinkedListNode.h>

@protocol NSCopying;

__attribute__((visibility("hidden")))
@interface AMSLRUCacheItem : AMSDoubleLinkedListNode

{
    id <NSCopying> _key;
}

@property (weak, nonatomic) id <NSCopying> key;

- (id)initWithKey:(id)arg1 object:(id)arg2;

@end
