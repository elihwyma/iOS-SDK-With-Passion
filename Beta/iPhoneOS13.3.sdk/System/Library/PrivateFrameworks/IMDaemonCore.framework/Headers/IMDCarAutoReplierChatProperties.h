/*
 Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface IMDCarAutoReplierChatProperties : NSObject

{
    NSMutableArray *_suppressedMessageIDs;
    _Bool _autoReplySent;
    _Bool _urgent;
}

@property (nonatomic) _Bool autoReplySent;
@property (nonatomic, getter=isUrgent) _Bool urgent;

- (id)init;
- (void)dealloc;
- (void)addSuppressedMessage:(id)arg1;
- (id)popSuppressedMessages;

@end
