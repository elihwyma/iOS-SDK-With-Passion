/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

@interface TVShelfLayoutSection : NSObject

{
    long long _numberOfItems;
    struct CGRect *_itemFrames;
    double _sectionHeaderHorizontalOffset;
    double _sectionHeaderVerticalBump;
    struct CGRect _itemsBoundingFrame;
    struct CGRect _sectionHeaderFrame;
    struct UIEdgeInsets _sectionInset;
}

@property (nonatomic) long long numberOfItems;
@property (nonatomic) struct CGRect itemsBoundingFrame;
@property (nonatomic) struct CGRect sectionHeaderFrame;
@property (nonatomic) double sectionHeaderHorizontalOffset;
@property (nonatomic) double sectionHeaderVerticalBump;
@property (nonatomic) struct UIEdgeInsets sectionInset;

- (void)dealloc;
- (struct CGRect)itemFrameAtIndex:(long long)arg1;
- (void)setItemFrame:(struct CGRect)arg1 atIndex:(long long)arg2;
- (struct CGRect)firstItemFrame;
- (struct CGRect)lastItemFrame;

@end
