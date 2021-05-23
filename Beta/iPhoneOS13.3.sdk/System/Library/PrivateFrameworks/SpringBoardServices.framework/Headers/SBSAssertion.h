/*
 Image: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
 */

#import <Foundation/NSObject.h>

@class BSMachPortReceiveRight, NSString;

@interface SBSAssertion : NSObject

{
    NSString *_assertionName;
    NSString *_reason;
    BSMachPortReceiveRight *_receiveRight;
}

@property (copy, nonatomic, readonly) NSString *assertionName;
@property (copy, nonatomic, readonly) NSString *reason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (id)initWithAssertionName:(id)arg1 reason:(id)arg2 receiveRight:(id)arg3;
- (id)initWithAssertionName:(id)arg1 reason:(id)arg2 port:(unsigned int)arg3;

@end
