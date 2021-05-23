/*
 Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

#import <Foundation/NSObject.h>

@interface CATStateMachineEvent : NSObject

{
    id _trigger;
    id _context;
}

@property (nonatomic, readonly) id trigger;
@property (nonatomic, readonly) id context;

+ (id)eventWithTrigger:(id)arg1 context:(id)arg2;

- (id)description;
- (id)initWithEventTrigger:(id)arg1 context:(id)arg2;

@end
