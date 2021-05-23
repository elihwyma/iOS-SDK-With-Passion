/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <MapsSupport/MSPSenderStrategy.h>

@class NSMutableSet;

@protocol MSPSenderMessageStrategyDelegate;

__attribute__((visibility("hidden")))
@interface MSPSenderMessageStrategy : MSPSenderStrategy

{
    id <MSPSenderMessageStrategyDelegate> _delegate;
    NSMutableSet *_messagesParticipants;
}

@property (retain, nonatomic) NSMutableSet *messagesParticipants;
@property (weak, nonatomic) id <MSPSenderMessageStrategyDelegate> delegate;

- (void)setState:(id)arg1;
- (id)participants;
- (void)addParticipants:(id)arg1;
- (void)removeParticipants:(id)arg1;
- (void)sendMessageIfNeeded;
- (void)_addMessagesParticipants:(id)arg1;
- (void)_removeMessagesParticipants:(id)arg1;

@end
