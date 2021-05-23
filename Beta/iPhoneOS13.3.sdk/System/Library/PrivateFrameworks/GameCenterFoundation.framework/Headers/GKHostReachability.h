/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <GameCenterFoundation/GKReachability.h>

@class NSError, NSString;

@interface GKHostReachability : GKReachability

{
    NSString *_hostName;
    NSError *_error;
}

@property (retain, nonatomic) NSString *hostName;
@property (retain, nonatomic) NSError *error;

+ (id)_gkReachabilityWithHostName:(id)arg1;

- (void)dealloc;

@end
