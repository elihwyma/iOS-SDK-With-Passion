/*
 Image: /System/Library/Frameworks/ARKit.framework/ARKit
 */

#import <Foundation/NSObject.h>

@class ARStarBoardViewController, CAMetalLayer, NSString, SRHMEConfig, UIView, UIWindow, UIWindowScene;

@protocol ARBoardControllerDelegate;

@interface ARBoardController : NSObject

{
    unsigned long long _currentBoardScene;
    UIView *_springBoardView;
    UIWindowScene *_starBoardScene;
    UIWindow *_starBoardWindow;
    ARStarBoardViewController *_starBoardViewController;
    NSString *_statistics;
    SRHMEConfig *_currentConfig;
    id <ARBoardControllerDelegate> _delegate;
    CAMetalLayer *_springBoardLayer;
    CAMetalLayer *_activeLayer;
}

@property (retain, nonatomic) CAMetalLayer *springBoardLayer;
@property (retain) CAMetalLayer *activeLayer;
@property (nonatomic) unsigned long long currentBoardScene;
@property (retain, nonatomic) NSString *statistics;
@property (retain, nonatomic) SRHMEConfig *currentConfig;
@property (weak, nonatomic) id <ARBoardControllerDelegate> delegate;
@property (weak, nonatomic) UIView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithView:(id)arg1;
- (_Bool)isDrawableAvailable;
- (id)nextDrawable;
- (void)starBoardSceneConnected:(id)arg1;
- (void)starBoardSceneDisconnected:(id)arg1;
- (void)_switchToStarBoard;
- (void)_switchToSpringBoard;
- (void)_updateMetalLayer:(id)arg1 descriptor:(id)arg2;
- (void)_handleStarBoardSceneConnect:(id)arg1;
- (void)_evaluateCompositorDestination:(id)arg1;
- (void)updateLayerBounds;
- (void)updateMetalLayer:(id)arg1;

@end
