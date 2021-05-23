/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UICollectionViewCell.h>

@class NSArray, UIKeyCommandDiscoverabilityHUDColumnView;

__attribute__((visibility("hidden")))
@interface UIKeyCommandDiscoverabilityHUDViewCell : UICollectionViewCell

{
    _Bool _constraintsForTwoColumns;
    UIKeyCommandDiscoverabilityHUDColumnView *_leftColumnView;
    UIKeyCommandDiscoverabilityHUDColumnView *_rightColumnView;
    NSArray *_constraints;
}

@property (retain, nonatomic) UIKeyCommandDiscoverabilityHUDColumnView *leftColumnView;
@property (retain, nonatomic) UIKeyCommandDiscoverabilityHUDColumnView *rightColumnView;
@property (retain, nonatomic) NSArray *constraints;
@property (nonatomic) _Bool constraintsForTwoColumns;

@end
