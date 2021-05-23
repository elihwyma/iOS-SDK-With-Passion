/*
 Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

#import <Foundation/NSObject.h>

@class NSMapTable, SASRequestOptions;

@interface AFUIRequestTrigger : NSObject

{
    SASRequestOptions *_options;
    long long _state;
    NSMapTable *_observers;
}

@property (nonatomic, readonly) SASRequestOptions *options;
@property (nonatomic, readonly) long long state;

- (void)_updateState:(long long)arg1;
- (id)initWithRequestOptions:(id)arg1 updateHandle:(CDUnknownBlockType *)arg2;
- (void)addTriggerTarget:(id)arg1 action:(SEL)arg2;
- (void)removeTriggerTarget:(id)arg1;

@end
