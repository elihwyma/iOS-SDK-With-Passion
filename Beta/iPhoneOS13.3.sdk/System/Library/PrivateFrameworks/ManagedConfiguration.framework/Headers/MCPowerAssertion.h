/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <ManagedConfiguration/MCProcessAssertion.h>

@interface MCPowerAssertion : MCProcessAssertion

{
    _Bool _parked;
}

@property (nonatomic, readonly, getter=isParked) _Bool parked;

- (id)init;
- (void)dealloc;
- (void)unpark;
- (void)park;

@end
