/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSString;

@protocol GEOMotionContextDelegate, GEOMotionContextProvider;

@interface GEOMotionContext : NSObject

{
    id <GEOMotionContextProvider> _provider;
    unsigned long long _motionType;
    unsigned long long _exitType;
    unsigned long long _confidence;
    id <GEOMotionContextDelegate> _delegate;
}

@property (weak, nonatomic) id <GEOMotionContextDelegate> delegate;
@property (nonatomic, readonly) unsigned long long motionType;
@property (nonatomic, readonly) unsigned long long exitType;
@property (nonatomic, readonly) unsigned long long confidence;
@property (nonatomic, readonly) _Bool isMoving;
@property (nonatomic, readonly) _Bool isWalking;
@property (nonatomic, readonly) _Bool isRunning;
@property (nonatomic, readonly) _Bool isDriving;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)stopMotionUpdates;
- (void)motionContextProvider:(id)arg1 didUpdateMotion:(unsigned long long)arg2 exitType:(unsigned long long)arg3 confidence:(unsigned long long)arg4;
- (void)startMotionUpdatesWithProvider:(id)arg1;

@end
