/*
 Image: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
 */

#import <MailSupport/MSTriageAction.h>

@class ECMessageFlags;

@protocol MSFlagChangeTriageActionDelegate;

@interface MSFlagChangeTriageAction : MSTriageAction

{
    long long _reason;
}

@property (nonatomic, readonly) ECMessageFlags *messageFlags;
@property (nonatomic, readonly) _Bool flagState;
@property (nonatomic, readonly) long long reason;
@property (weak, nonatomic, readonly) id <MSFlagChangeTriageActionDelegate> delegate;

- (id)_changeAction;
- (id)initWithMessageListSelection:(id)arg1 delegate:(id)arg2 reason:(long long)arg3;
- (void)_toggleFlagWithBuilder:(id)arg1;

@end
