/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <UIKit/UIViewController.h>

@class MKPlaceActionManager, MKPlaceSectionItemView, MKPlaceholderGridCache, NSArray, NSString, UILayoutGuide;

__attribute__((visibility("hidden")))
@interface MKPlaceCardActionsRowViewController : UIViewController

{
    NSArray *_actionButtons;
    NSArray *_constraints;
    NSArray *_actionRowsArray;
    unsigned long long _maxButtonsPerRow;
    MKPlaceSectionItemView *_hairlineView;
    unsigned long long _style;
    UILayoutGuide *_marginLayoutguide;
    MKPlaceholderGridCache *_placeholderGridCache;
    NSArray *_items;
    MKPlaceActionManager *_actionManager;
}

@property (copy, nonatomic) NSArray *items;
@property (weak, nonatomic) MKPlaceActionManager *actionManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadView;
- (id)initWithStyle:(unsigned long long)arg1;
- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (void)viewDidLayoutSubviews;
- (void)createConstraints;
- (void)infoCardThemeChanged;
- (void)createActionViews;
- (unsigned long long)maxButtonsPerRow;
- (void)layoutButtons;
- (void)actionRowSelected:(id)arg1;
- (void)createActions;

@end
