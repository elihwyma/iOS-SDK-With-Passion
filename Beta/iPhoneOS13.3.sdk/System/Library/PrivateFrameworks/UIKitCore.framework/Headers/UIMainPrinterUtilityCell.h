/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <UIKitCore/UITableViewCell.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface UIMainPrinterUtilityCell : UITableViewCell

{
    NSArray *_supplyLevelViews;
    _Bool _showSupplyDataUnderPrinterName;
    NSArray *_supplies;
}

@property (retain, nonatomic) NSArray *supplies;
@property (nonatomic) _Bool showSupplyDataUnderPrinterName;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;

@end
