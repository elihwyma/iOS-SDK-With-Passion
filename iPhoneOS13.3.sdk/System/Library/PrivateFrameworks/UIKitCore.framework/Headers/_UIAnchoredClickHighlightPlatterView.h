//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIClickHighlightPlatterView.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface _UIAnchoredClickHighlightPlatterView : _UIClickHighlightPlatterView
{
    UIView *_anchorView;
}

@property(nonatomic) __weak UIView *anchorView; // @synthesize anchorView=_anchorView;
// - (void).cxx_destruct;
- (void)deAnchor;
- (void)anchorToContainer;
- (id)initWithTargetedPreview:(id)arg1;

@end

