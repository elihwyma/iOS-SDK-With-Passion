/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class AMSDoubleLinkedListNode, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface AMSDoubleLinkedList : NSObject

{
    unsigned long long _count;
    AMSDoubleLinkedListNode *_head;
    AMSDoubleLinkedListNode *_tail;
    NSString *_listIdentifier;
}

@property (retain, nonatomic) NSString *listIdentifier;
@property (nonatomic, readonly) NSArray *allNodes;
@property (nonatomic, readonly) unsigned long long count;
@property (retain, nonatomic) AMSDoubleLinkedListNode *head;
@property (retain, nonatomic) AMSDoubleLinkedListNode *tail;

- (id)init;
- (id)description;
- (id)insertObject:(id)arg1;
- (id)appendObject:(id)arg1;
- (void)removeNode:(id)arg1;
- (void)insertNode:(id)arg1;
- (void)removeAllNodes;
- (void)appendNode:(id)arg1;

@end
