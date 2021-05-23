/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface AFPowerAssertionManager : NSObject

{
    unsigned int _powerAssertion;
    NSString *_debugName;
}

- (id)init;
- (void)dealloc;
- (void)releasePowerAssertion;
- (void)takePowerAssertionWithName:(id)arg1;

@end
