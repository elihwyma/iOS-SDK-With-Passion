/*
 Image: /System/Library/Frameworks/MediaToolbox.framework/MediaToolbox
 */

#import <CALayer.h>

@class NSObject;

@protocol FigNeroLayerDelegate, OS_dispatch_queue;

@interface FigNeroLayer : CALayer

{
    NSObject<OS_dispatch_queue> *_neroQueue;
    struct OpaqueFigNeroid *_neroid;
    id <FigNeroLayerDelegate> _neroDelegate;
}

@property (nonatomic) id <FigNeroLayerDelegate> neroDelegate;

- (id)init;
- (void)dealloc;
- (void)stop;
- (void)start;
- (void)_start;
- (void)setBounds:(struct CGRect)arg1;
- (void)_dispatchNotification:(id)arg1 value:(id)arg2;

@end
