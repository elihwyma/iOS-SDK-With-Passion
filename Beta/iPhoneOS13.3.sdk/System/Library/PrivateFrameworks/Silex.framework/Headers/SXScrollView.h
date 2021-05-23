/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <TSReading/TSDScrollView.h>

@class NSString, SXAXCustomRotorProvider;

@protocol SXScrollViewDelegate;

@interface SXScrollView : TSDScrollView

{
    id <SXScrollViewDelegate> _scrollViewDelegate;
    SXAXCustomRotorProvider *_customRotorProvider;
}

@property (retain, nonatomic) SXAXCustomRotorProvider *customRotorProvider;
@property (weak, nonatomic) id <SXScrollViewDelegate> scrollViewDelegate;
@property (nonatomic, readonly) _Bool isBouncing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect)arg1;
- (id)accessibilityCustomRotors;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)_accessibilityScrollingEnabled;
- (_Bool)shouldOccludeAccessibilityElement:(id)arg1;

@end
