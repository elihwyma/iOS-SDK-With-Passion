/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UIView.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface SupplyLevelView : UIView

{
    int supplyLevel;
    NSArray *colors;
}

@property (nonatomic) int supplyLevel;
@property (retain, nonatomic) NSArray *colors;

- (_Bool)isOpaque;
- (void)drawRect:(struct CGRect)arg1;

@end
