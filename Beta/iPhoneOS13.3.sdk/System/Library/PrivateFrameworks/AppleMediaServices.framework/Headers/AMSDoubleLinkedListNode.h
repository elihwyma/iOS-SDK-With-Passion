/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AMSDoubleLinkedListNode : NSObject

{
    AMSDoubleLinkedListNode *_previous;
    id _object;
    AMSDoubleLinkedListNode *_next;
    NSString *_listIdentifier;
}

@property (retain, nonatomic) NSString *listIdentifier;
@property (retain, nonatomic) AMSDoubleLinkedListNode *previous;
@property (retain, nonatomic) id object;
@property (retain, nonatomic) AMSDoubleLinkedListNode *next;

- (id)init;
- (id)initWithObject:(id)arg1;

@end
