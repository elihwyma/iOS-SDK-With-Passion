/*
 Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

#import <Foundation/NSObject.h>

@class FBInterfaceOrientationServiceServer;

@interface FBInterfaceOrientationService : NSObject

{
    long long _interfaceOrientation;
    FBInterfaceOrientationServiceServer *_server;
}

@property (nonatomic, readonly) long long interfaceOrientation;

+ (id)sharedInstance;

- (id)init;
- (void)setInterfaceOrientation:(long long)arg1;
- (void)setInterfaceOrientation:(long long)arg1 animationSettings:(id)arg2 direction:(long long)arg3;

@end
