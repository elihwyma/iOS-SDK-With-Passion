/*
 Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <Foundation/NSObject.h>

@interface IMDoubleLinkedListNode : NSObject

{
    IMDoubleLinkedListNode *_prev;
    IMDoubleLinkedListNode *_next;
    id _object;
}

@property (retain) IMDoubleLinkedListNode *prev;
@property (retain) IMDoubleLinkedListNode *next;
@property (retain) id object;

- (void)dealloc;
- (id)initWithObject:(id)arg1;
- (void)removeFromList;
- (void)orphan;

@end
