/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class CNSuspendableSchedulerDecorator;

@protocol CNCancelable;

@interface _CNFlatMapInnerSubscriptionContext : NSObject

{
    CNSuspendableSchedulerDecorator *_decorator;
    id <CNCancelable> _token;
}

@property (nonatomic, readonly) CNSuspendableSchedulerDecorator *decorator;
@property (nonatomic, readonly) id <CNCancelable> token;

- (id)initWithDecorator:(id)arg1 token:(id)arg2;

@end
