/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKPlaceSectionViewController.h>

@class MKPlaceActionManager, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MKPlaceCardActionsViewController : MKPlaceSectionViewController

{
    _Bool _haveTwoColumns;
    _Bool _useSmallFonts;
    _Bool _showTopSeparator;
    _Bool _allowRowSelection;
    _Bool _useMarginLayout;
    _Bool _showTopButtonSeparator;
    NSArray *_actionItemArray;
    NSArray *_viewArray;
    MKPlaceActionManager *_actionManager;
}

@property (retain, nonatomic) NSArray *viewArray;
@property (nonatomic) _Bool haveTwoColumns;
@property (nonatomic) _Bool useSmallFonts;
@property (nonatomic) _Bool useMarginLayout;
@property (nonatomic) _Bool showTopSeparator;
@property (nonatomic) _Bool showTopButtonSeparator;
@property (nonatomic) _Bool allowRowSelection;
@property (copy, nonatomic) NSArray *actionItemArray;
@property (weak, nonatomic) MKPlaceActionManager *actionManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)sectionView:(id)arg1 didSelectRow:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;
- (void)placeCardActionSectionView:(id)arg1 buttonWithActionItemPressed:(id)arg2;
- (void)_setUpSectionViews;
- (id)_makePlaceActionButton;

@end
