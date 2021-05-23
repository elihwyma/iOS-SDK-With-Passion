/*
 Image: /System/Library/PrivateFrameworks/HealthToolbox.framework/HealthToolbox
 */

#import <HealthUI/HKSwitchTableViewCell.h>

@class HKDisplayType, NSString, WDFavoriteDisplayTypesController;

__attribute__((visibility("hidden")))
@interface HKFavoriteSwitchTableViewCell : HKSwitchTableViewCell

{
    WDFavoriteDisplayTypesController *_favoriteDisplayTypesController;
    HKDisplayType *_displayType;
}

@property (retain, nonatomic) WDFavoriteDisplayTypesController *favoriteDisplayTypesController;
@property (retain, nonatomic) HKDisplayType *displayType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)defaultReuseIdentifier;

- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)favoriteDisplayTypesControllerDidUpdate:(id)arg1;
- (void)switchCellValueChanged:(id)arg1 value:(_Bool)arg2;
- (void)updateSwitchValue;

@end
