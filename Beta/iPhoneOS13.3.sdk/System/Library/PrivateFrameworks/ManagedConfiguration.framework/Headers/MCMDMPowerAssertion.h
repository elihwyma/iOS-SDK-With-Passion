/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <ManagedConfiguration/MCPowerAssertion.h>

@class NSDate, NSString, UMUserSwitchBlockingTask;

@interface MCMDMPowerAssertion : MCPowerAssertion

{
    NSString *_reason;
    NSDate *_creationDate;
    UMUserSwitchBlockingTask *_blockingTask;
}

@property (nonatomic, readonly) NSString *reason;
@property (nonatomic, readonly) NSDate *creationDate;
@property (retain, nonatomic) UMUserSwitchBlockingTask *blockingTask;

+ (id)_dateFormatter;
+ (id)_currentAssertions;
+ (id)assertionDescriptions;

- (void)dealloc;
- (id)description;
- (id)initWithReason:(id)arg1;

@end
