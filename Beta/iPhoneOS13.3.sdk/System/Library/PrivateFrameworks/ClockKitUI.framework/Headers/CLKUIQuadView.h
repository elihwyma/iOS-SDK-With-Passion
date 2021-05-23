/*
 Image: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
 */

#import <UIKit/UIView.h>

@class CLKUIQuadViewDisplayLink, NSArray, NSMutableArray, NSString;

@protocol CLKUIQuadViewDelegate;

@interface CLKUIQuadView : UIView

{
    NSMutableArray *_mutableQuads;
    CLKUIQuadViewDisplayLink *_displayLink;
    struct {
        unsigned int quadViewWillDisplay:1;
    } _delegateRespondsTo;
    unsigned long long _frameNum;
    unsigned int _debugId;
    _Bool _singleBufferMode;
    id <CLKUIQuadViewDelegate> _delegate;
    NSString *_debugIdentifier;
}

@property (weak, nonatomic) id <CLKUIQuadViewDelegate> delegate;
@property (nonatomic, readonly) NSArray *quads;
@property (nonatomic, getter=isPaused) _Bool paused;
@property (nonatomic) long long preferredFramesPerSecond;
@property (nonatomic, readonly) unsigned long long frameNum;
@property (nonatomic) _Bool singleBufferMode;
@property (copy, nonatomic) NSString *debugIdentifier;

+ (id)quadViewWithFrame:(struct CGRect)arg1 options:(unsigned long long)arg2 colorSpace:(long long)arg3;
+ (id)quadViewWithFrame:(struct CGRect)arg1 options:(unsigned long long)arg2;
+ (id)quadViewWithFrame:(struct CGRect)arg1;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)discardContents;
- (_Bool)_prepareAndRenderForTime:(double)arg1 inGroup:(id)arg2 checkForDrawable:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)renderSynchronouslyWithImageQueueDiscard:(_Bool)arg1 inGroup:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeAllQuads;
- (void)_prerenderForTime:(double)arg1;
- (_Bool)_displayAndCheckForDrawable:(_Bool)arg1 WithCompletion:(CDUnknownBlockType)arg2;
- (void)_handleQuadArrayChange:(id)arg1;
- (_Bool)renderSynchronouslyWithImageQueueDiscard:(_Bool)arg1 inGroup:(id)arg2;
- (void)addQuad:(id)arg1;
- (void)addQuadsFromArray:(id)arg1;
- (void)removeQuad:(id)arg1;
- (id)snapshotInRect:(struct CGRect)arg1 scale:(double)arg2 time:(double)arg3;

@end
