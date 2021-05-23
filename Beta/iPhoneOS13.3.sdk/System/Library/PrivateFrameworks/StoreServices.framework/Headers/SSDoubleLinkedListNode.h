/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSString;

@interface SSDoubleLinkedListNode : NSObject

{
    SSDoubleLinkedListNode *_previous;
    id _object;
    SSDoubleLinkedListNode *_next;
    NSString *_listIdentifier;
}

@property (retain, nonatomic) NSString *listIdentifier;
@property (retain, nonatomic) SSDoubleLinkedListNode *previous;
@property (retain, nonatomic) id object;
@property (retain, nonatomic) SSDoubleLinkedListNode *next;

- (id)init;
- (id)initWithObject:(id)arg1;

@end
