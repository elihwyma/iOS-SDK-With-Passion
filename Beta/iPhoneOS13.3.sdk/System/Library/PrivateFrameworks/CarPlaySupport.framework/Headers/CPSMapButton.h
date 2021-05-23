/*
 Image: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
 */

#import <CarPlaySupport/CPSButton.h>

@class CPMapButton;

@interface CPSMapButton : CPSButton

{
    CPMapButton *_mapButton;
}

@property (retain, nonatomic) CPMapButton *mapButton;

+ (id)buttonWithCPMapButton:(id)arg1;

- (void)traitCollectionDidChange:(id)arg1;
- (void)setCharge:(float)arg1;
- (float)charge;
- (void)_updateButtonImages;

@end
