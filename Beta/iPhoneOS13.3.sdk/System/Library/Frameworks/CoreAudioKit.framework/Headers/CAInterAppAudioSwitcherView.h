/*
 Image: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
 */

#import <UIKit/UIView.h>

#import <CoreAudioKit/Swift-Protocol.h>

@class CAIAANodeContainer, CAIAANodeInfo, NSString, NSTimer, UIPageControl;

@interface CAInterAppAudioSwitcherView : UIView <Swift>

{
    struct OpaqueAudioComponentInstance *outputUnit;
    CAIAANodeContainer *nodeView;
    UIPageControl *pageControl;
    CAIAANodeInfo *info;
    NSTimer *refreshTimer;
    _Bool showingAppNames;
    _Bool isHostConnected;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (getter=isShowingAppNames) _Bool showingAppNames;

- (void)initialize;
- (id)initWithCoder:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (double)contentWidth;
- (void)removeFromSuperview;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)didMoveToSuperview;
- (void)startTimer;
- (void)updateInfo;
- (void)audioUnitPropertyChangedListener:(void *)arg1 unit:(struct OpaqueAudioComponentInstance *)arg2 propID:(unsigned int)arg3 scope:(unsigned int)arg4 element:(unsigned int)arg5;
- (void)appHasGoneInBackground;
- (void)appHasGoneForeground;
- (_Bool)isHostConnected;
- (void)setOutputAudioUnit:(struct OpaqueAudioComponentInstance *)arg1;
- (void)nodePressed:(id)arg1;
- (void)changePage:(id)arg1;
- (void)updateNodeList;

@end
