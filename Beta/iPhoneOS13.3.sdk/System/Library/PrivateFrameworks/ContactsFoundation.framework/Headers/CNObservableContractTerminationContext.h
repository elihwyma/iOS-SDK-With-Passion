/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface CNObservableContractTerminationContext : NSObject

{
    NSArray *_callStack;
    unsigned long long _threadId;
}

@property (copy, readonly) NSArray *callStack;
@property (readonly) unsigned long long threadId;

- (id)initWithCallStack:(id)arg1 threadId:(unsigned long long)arg2;

@end
