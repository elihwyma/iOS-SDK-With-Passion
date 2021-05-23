/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <Foundation/NSObject.h>

@class NSString, PHAGraphServiceWorker;

@interface PHAPendingRequestReference : NSObject

{
    PHAGraphServiceWorker *_worker;
    NSString *_label;
}

@property (weak) PHAGraphServiceWorker *worker;
@property (retain) NSString *label;

- (void)dealloc;

@end
