/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

#import <SpringBoard/Swift-Protocol.h>

@class NSString, SBIdleTimerRequestConfiguration;

@interface _SBIdleTimerConfigurationInfo : NSObject <Swift>

{
    SBIdleTimerRequestConfiguration *_configuration;
    NSString *_reason;
}

@property (nonatomic, readonly) SBIdleTimerRequestConfiguration *configuration;
@property (copy, nonatomic, readonly) NSString *reason;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithConfiguration:(id)arg1 reason:(id)arg2;

@end
