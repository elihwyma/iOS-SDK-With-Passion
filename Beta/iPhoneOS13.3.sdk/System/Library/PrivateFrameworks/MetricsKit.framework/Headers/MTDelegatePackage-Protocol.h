/*
 Image: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
 */

#import <MetricsKit/Swift-Protocol.h>

@protocol MTConfigDelegate, MTEnvironmentDelegate, MTEventRecorderDelegate;

@protocol MTDelegatePackage <Swift>

@property (nonatomic, readonly) id <MTConfigDelegate> configDelegate;
@property (nonatomic, readonly) id <MTEventRecorderDelegate> eventRecorderDelegate;
@property (nonatomic, readonly) id <MTEnvironmentDelegate> environmentDelegate;

@end
