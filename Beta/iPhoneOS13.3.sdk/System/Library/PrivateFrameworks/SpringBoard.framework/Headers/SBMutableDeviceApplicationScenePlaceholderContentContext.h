/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <SpringBoard/SBDeviceApplicationScenePlaceholderContentContext.h>

@class NSString, NSURL;

@interface SBMutableDeviceApplicationScenePlaceholderContentContext : SBDeviceApplicationScenePlaceholderContentContext

@property (nonatomic) _Bool prefersLiveXIB;
@property (nonatomic) long long layoutEnvironment;
@property (nonatomic) unsigned long long preferredContentType;
@property (copy, nonatomic) NSString *requestedLaunchIdentifier;
@property (copy, nonatomic) NSURL *url;

@end
