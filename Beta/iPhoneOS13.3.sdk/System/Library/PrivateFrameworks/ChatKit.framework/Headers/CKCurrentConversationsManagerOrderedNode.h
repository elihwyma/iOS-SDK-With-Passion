/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <IMCore/IMDoubleLinkedListNode.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKCurrentConversationsManagerOrderedNode : IMDoubleLinkedListNode

{
    NSString *_key;
}

@property (copy, nonatomic) NSString *key;

@end
