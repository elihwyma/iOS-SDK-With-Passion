/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class CNQueue, NSMutableArray;

@protocol CNScheduler;

@interface _CNFlatMapSubscriptionContext : NSObject

{
    CNQueue *_decorators;
    NSMutableArray *_tokens;
    id <CNScheduler> _downstream;
    id <CNScheduler> _resourceLock;
    _Bool _operatorReceiving;
    _Bool _observerReceiving;
}

@property (nonatomic, readonly) CNQueue *decorators;
@property (nonatomic, readonly) NSMutableArray *tokens;
@property (nonatomic, readonly) id <CNScheduler> downstream;
@property (nonatomic, readonly) id <CNScheduler> resourceLock;
@property (nonatomic, getter=isOperatorReceiving) _Bool operatorReceiving;
@property (nonatomic, getter=isObserverReceiving) _Bool observerReceiving;

- (id)initWithSchedulerProvider:(id)arg1;

@end
