/*
 Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface GKNetworkActivityIndicatorDelegate : NSObject

{
    int _networkIndicatorCount;
}

@property (nonatomic) int networkIndicatorCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)beginNetworkActivity;
- (void)endNetworkActivity;
- (void)resetNetworkActivity;

@end
