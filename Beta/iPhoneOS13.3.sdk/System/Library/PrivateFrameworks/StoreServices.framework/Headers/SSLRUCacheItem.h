/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <StoreServices/SSDoubleLinkedListNode.h>

@protocol NSCopying;

@interface SSLRUCacheItem : SSDoubleLinkedListNode

{
    id <NSCopying> _key;
}

@property (weak, nonatomic) id <NSCopying> key;

- (id)initWithKey:(id)arg1 object:(id)arg2;

@end
