/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSArray, NSString, SSDoubleLinkedListNode;

@interface SSDoubleLinkedList : NSObject

{
    unsigned long long _count;
    SSDoubleLinkedListNode *_head;
    SSDoubleLinkedListNode *_tail;
    NSString *_listIdentifier;
}

@property (retain, nonatomic) NSString *listIdentifier;
@property (nonatomic, readonly) NSArray *allNodes;
@property (nonatomic, readonly) unsigned long long count;
@property (retain, nonatomic) SSDoubleLinkedListNode *head;
@property (retain, nonatomic) SSDoubleLinkedListNode *tail;

- (id)init;
- (id)description;
- (id)insertObject:(id)arg1;
- (id)appendObject:(id)arg1;
- (void)removeNode:(id)arg1;
- (void)insertNode:(id)arg1;
- (void)removeAllNodes;
- (void)appendNode:(id)arg1;

@end
