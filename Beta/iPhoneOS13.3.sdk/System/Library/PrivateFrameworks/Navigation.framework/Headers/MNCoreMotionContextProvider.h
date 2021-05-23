/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class CMActivityManager, MNTraceRecorder, NSString;

@protocol GEOMotionContextProviderDelegate;

@interface MNCoreMotionContextProvider : NSObject

{
    CMActivityManager *_activityManager;
    id <GEOMotionContextProviderDelegate> _delegate;
    MNTraceRecorder *_traceRecorder;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <GEOMotionContextProviderDelegate> motionDelegate;

- (void)dealloc;
- (void)stopMotionUpdates;
- (void)startMotionUpdates;
- (id)initWithTraceRecorder:(id)arg1;

@end
