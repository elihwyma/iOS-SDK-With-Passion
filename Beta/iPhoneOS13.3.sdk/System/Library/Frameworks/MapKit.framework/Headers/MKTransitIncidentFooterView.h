/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UITableViewHeaderFooterView.h>

@class MKViewWithHairline, UIColor;

__attribute__((visibility("hidden")))
@interface MKTransitIncidentFooterView : UITableViewHeaderFooterView

{
    MKViewWithHairline *_hairlineView;
}

@property (copy, nonatomic) UIColor *separatorColor;

- (id)initWithCoder:(id)arg1;
- (void)_commonInit;
- (id)initWithReuseIdentifier:(id)arg1;

@end
