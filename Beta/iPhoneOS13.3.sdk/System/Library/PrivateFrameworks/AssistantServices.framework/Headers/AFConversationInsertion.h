/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class AceObject, NSIndexPath, NSString;

@interface AFConversationInsertion : NSObject

{
    long long _conversationItemType;
    AceObject *_aceObject;
    NSString *_aceCommandIdentifier;
    NSIndexPath *_indexPath;
}

@property (nonatomic, readonly) long long conversationItemType;
@property (nonatomic, readonly) AceObject *aceObject;
@property (copy, nonatomic, readonly) NSString *aceCommandIdentifier;
@property (nonatomic, readonly) NSIndexPath *indexPath;

- (id)initWithConversationItemType:(long long)arg1 aceObject:(id)arg2 aceCommandIdentifier:(id)arg3 indexPath:(id)arg4;

@end
