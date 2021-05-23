/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSURL, RBSProcessIdentity;

@protocol FBProcessWatchdogProviding;

@interface FBProcessExecutionContext : NSObject

{
    RBSProcessIdentity *_identity;
    NSArray *_arguments;
    NSDictionary *_environment;
    NSURL *_standardOutputURL;
    NSURL *_standardErrorURL;
    _Bool _waitForDebugger;
    _Bool _disableASLR;
    _Bool _checkForLeaks;
    long long _launchIntent;
    unsigned int _launchAssertionFlags;
    id <FBProcessWatchdogProviding> _watchdogProvider;
    double _watchdogExtension;
}

@property (copy, nonatomic) NSArray *arguments;
@property (copy, nonatomic) NSDictionary *environment;
@property (retain, nonatomic) NSURL *standardOutputURL;
@property (retain, nonatomic) NSURL *standardErrorURL;
@property (nonatomic) _Bool waitForDebugger;
@property (nonatomic) _Bool disableASLR;
@property (nonatomic) _Bool checkForLeaks;
@property (nonatomic) long long launchIntent;
@property (nonatomic) unsigned int launchAssertionFlags;
@property (retain, nonatomic) id <FBProcessWatchdogProviding> watchdogProvider;
@property (nonatomic) double watchdogExtension;
@property (copy, nonatomic) RBSProcessIdentity *identity;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentity:(id)arg1;
- (id)_initWithExecutionContext:(id)arg1;
- (unsigned int)_launchAssertionFlags;

@end
