/*
 Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
 */

#import <UIKit/UIView.h>

@class NSString, SBIcon, SBIconView;

@protocol SBIconViewProviding;

@interface SBIconRotationContainer : UIView

{
    _Bool _offscreen;
    NSString *_location;
    long long _transitionAnimation;
    SBIconView *_startView;
    SBIconView *_endView;
    id <SBIconViewProviding> _iconViewProvider;
    struct SBIconCoordinate _coordinate;
}

@property (nonatomic, readonly) SBIconView *startView;
@property (nonatomic, readonly) SBIconView *endView;
@property (retain, nonatomic) id <SBIconViewProviding> iconViewProvider;
@property (nonatomic, readonly) SBIcon *startIcon;
@property (nonatomic, readonly) SBIcon *endIcon;
@property (nonatomic, readonly) struct SBIconCoordinate coordinate;
@property (copy, nonatomic, readonly) NSString *location;
@property (nonatomic, readonly) long long transitionAnimation;
@property (nonatomic, readonly, getter=isOffscreen) _Bool offscreen;

- (void)layoutSubviews;
- (void)performTransition;
- (id)initWithFrame:(struct CGRect)arg1 startIcon:(id)arg2 endIcon:(id)arg3 iconViewProvider:(id)arg4 coordinate:(struct SBIconCoordinate)arg5 location:(id)arg6 transitionAnimation:(long long)arg7 offscreen:(_Bool)arg8;
- (void)prepareToTransition;
- (void)concludeTransition;
- (id)addIconViewForIcon:(id)arg1 configurationOptions:(unsigned long long)arg2;

@end
