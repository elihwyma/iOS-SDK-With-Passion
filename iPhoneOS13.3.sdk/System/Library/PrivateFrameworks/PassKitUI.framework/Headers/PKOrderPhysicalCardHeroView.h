//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class PKPhysicalCardArtworkView, UIImageView;

@interface PKOrderPhysicalCardHeroView : UIView
{
    UIImageView *_backgroundView;
    PKPhysicalCardArtworkView *_artworkView;
}

@property(readonly, nonatomic) PKPhysicalCardArtworkView *artworkView; // @synthesize artworkView=_artworkView;
// - (void).cxx_destruct;
- (id)_backgroundImage;
- (void)layoutSubviews;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end
