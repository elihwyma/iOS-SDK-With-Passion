/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSObject.h>

@class IMDoubleLinkedListNode, NSDate, NSString;

@interface CKChatItemCachedSizeMetrics : NSObject

{
    NSString *_chatItemGUID;
    NSString *_key;
    NSDate *_lastAccess;
    IMDoubleLinkedListNode *_node;
    struct CGSize _size;
    struct UIEdgeInsets _textAlignmentInsets;
}

@property (retain, nonatomic) NSString *chatItemGUID;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) struct CGSize size;
@property (nonatomic) struct UIEdgeInsets textAlignmentInsets;
@property (retain, nonatomic) NSDate *lastAccess;
@property (retain, nonatomic) IMDoubleLinkedListNode *node;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
