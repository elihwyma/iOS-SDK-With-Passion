/*
 Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <Foundation/NSObject.h>

@class IMDoubleLinkedListNode;

@interface IMDoubleLinkedList : NSObject

{
    IMDoubleLinkedListNode *_first;
    IMDoubleLinkedListNode *_last;
    unsigned long long _count;
}

@property (retain) IMDoubleLinkedListNode *first;
@property (retain) IMDoubleLinkedListNode *last;
@property (readonly) unsigned long long count;

- (id)init;
- (void)dealloc;
- (void)removeAllObjects;
- (_Bool)containsObject:(id)arg1;
- (id)allObjects;
- (void)appendObject:(id)arg1;
- (void)appendLinkedListNode:(id)arg1;
- (void)pushLinkedListNode:(id)arg1;
- (void)removeLinkedListNode:(id)arg1;
- (void)pushObject:(id)arg1;
- (id)popObject;

@end
