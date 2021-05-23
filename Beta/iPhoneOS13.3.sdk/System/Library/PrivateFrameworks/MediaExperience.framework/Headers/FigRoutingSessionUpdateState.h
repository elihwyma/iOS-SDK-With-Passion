/*
 Image: /System/Library/PrivateFrameworks/MediaExperience.framework/MediaExperience
 */

#import <Foundation/NSObject.h>

@class ARPPredictionContext;

__attribute__((visibility("hidden")))
@interface FigRoutingSessionUpdateState : NSObject

{
    struct OpaqueFigRoutingSession *_newSession;
    ARPPredictionContext *_predictionContext;
}

@property (retain, nonatomic) struct OpaqueFigRoutingSession *newSession;
@property (retain, nonatomic) ARPPredictionContext *predictionContext;

- (void)dealloc;
- (id)initWithNewSession:(struct OpaqueFigRoutingSession *)arg1;

@end
