/*
 Image: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
 */

#import <Foundation/NSObject.h>

@class ECLocalMessageAction, NSError, NSString;

@protocol ECLocalActionReplayerDelegate;

@interface ECLocalActionReplayer : NSObject

{
    id <ECLocalActionReplayerDelegate> _delegate;
    ECLocalMessageAction *_action;
    NSError *_error;
}

@property (weak, nonatomic) id <ECLocalActionReplayerDelegate> delegate;
@property (retain, nonatomic) ECLocalMessageAction *action;
@property (retain, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)log;

- (id)init;
- (id)initWithAction:(id)arg1;
- (id)replayAction;
- (id)failActionWithError:(id)arg1;

@end
