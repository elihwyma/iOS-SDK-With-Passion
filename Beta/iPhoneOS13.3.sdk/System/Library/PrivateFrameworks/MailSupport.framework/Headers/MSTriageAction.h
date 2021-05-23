/*
 Image: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
 */

#import <Foundation/NSObject.h>

@class EMMessageRepository, MSMessageListItemSelection;

@protocol MSTriageActionDelegate;

@interface MSTriageAction : NSObject

{
    id <MSTriageActionDelegate> _delegate;
    MSMessageListItemSelection *_messageListItemSelection;
}

@property (nonatomic, readonly) MSMessageListItemSelection *messageListItemSelection;
@property (nonatomic, readonly) EMMessageRepository *messageRepository;
@property (weak, nonatomic, readonly) id <MSTriageActionDelegate> delegate;

+ (id)log;
+ (void)_performAction:(id)arg1 messageRepository:(id)arg2 undoManager:(id)arg3 actionName:(id)arg4;

- (id)_changeAction;
- (void)performWithUndoManager:(id)arg1 actionName:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithMessageListSelection:(id)arg1 delegate:(id)arg2;

@end
