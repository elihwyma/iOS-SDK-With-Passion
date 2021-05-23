/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Navigation/Swift-Protocol.h>

@protocol GEOMotionContextProviderDelegate;

@protocol GEOMotionContextProvider <Swift>

@property (weak, nonatomic) id <GEOMotionContextProviderDelegate> motionDelegate;

- (unsigned short)stopMotionUpdates;
- (unsigned short)startMotionUpdates;

@end
