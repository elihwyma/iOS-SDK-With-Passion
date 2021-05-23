/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <UIKit/UITableViewCell.h>

@class PXPlacesMapView;

@interface PXContextualMemoriesSettingsLocationPickerTableViewCell : UITableViewCell

{
    PXPlacesMapView *_mapView;
}

@property (nonatomic, readonly) PXPlacesMapView *mapView;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
