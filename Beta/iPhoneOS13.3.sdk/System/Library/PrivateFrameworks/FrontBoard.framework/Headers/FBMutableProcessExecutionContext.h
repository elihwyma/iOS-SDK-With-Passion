/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <FrontBoard/FBProcessExecutionContext.h>

@class NSArray, NSDictionary, NSURL, RBSProcessIdentity;

@protocol FBProcessWatchdogProviding;

@interface FBMutableProcessExecutionContext : FBProcessExecutionContext

@property (copy, nonatomic) RBSProcessIdentity *identity;
@property (copy, nonatomic) NSArray *arguments;
@property (copy, nonatomic) NSDictionary *environment;
@property (retain, nonatomic) NSURL *standardOutputURL;
@property (retain, nonatomic) NSURL *standardErrorURL;
@property (nonatomic) _Bool waitForDebugger;
@property (nonatomic) _Bool disableASLR;
@property (nonatomic) _Bool checkForLeaks;
@property (nonatomic) long long launchIntent;
@property (retain, nonatomic) id <FBProcessWatchdogProviding> watchdogProvider;
@property (nonatomic) double watchdogExtension;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
