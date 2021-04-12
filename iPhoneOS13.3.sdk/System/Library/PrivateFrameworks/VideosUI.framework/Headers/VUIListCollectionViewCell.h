//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface VUIListCollectionViewCell : UICollectionViewCell
{
    BOOL _shouldAppearSelected;
    UIColor *_backgroundColor;
    UIColor *_highlightedBackgroundColor;
}

@property(nonatomic) BOOL shouldAppearSelected; // @synthesize shouldAppearSelected=_shouldAppearSelected;
@property(retain, nonatomic) UIColor *highlightedBackgroundColor; // @synthesize highlightedBackgroundColor=_highlightedBackgroundColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
// - (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;

@end

