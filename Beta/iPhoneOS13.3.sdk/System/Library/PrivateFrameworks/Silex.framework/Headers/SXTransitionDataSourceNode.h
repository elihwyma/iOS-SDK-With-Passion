/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, UIView;

@protocol SXTransitionableComponentView;

@interface SXTransitionDataSourceNode : NSObject

{
    _Bool _usesThumbnail;
    unsigned long long _transitionType;
    id <SXTransitionableComponentView> _componentView;
}

@property (nonatomic, readonly) id <SXTransitionableComponentView> componentView;
@property (nonatomic, readonly) _Bool usesThumbnail;
@property (nonatomic, readonly) unsigned long long transitionType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) UIView *transitionContainerView;
@property (nonatomic, readonly) UIView *transitionContentView;
@property (nonatomic, readonly) _Bool transitionViewUsesThumbnail;
@property (nonatomic, readonly) _Bool transitionViewIsVisible;
@property (nonatomic, readonly) _Bool transitionViewShouldFadeInContent;
@property (nonatomic, readonly) struct CGRect transitionVisibleFrame;
@property (nonatomic, readonly) struct CGRect transitionContainerFrame;
@property (nonatomic, readonly) struct CGRect transitionContentFrame;
@property (nonatomic, readonly) _Bool isTransitionable;

- (id)initWithComponentView:(id)arg1 transitionType:(unsigned long long)arg2 usesThumbnail:(_Bool)arg3;

@end
