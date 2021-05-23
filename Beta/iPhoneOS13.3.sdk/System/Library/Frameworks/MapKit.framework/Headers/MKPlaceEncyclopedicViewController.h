/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKPlaceSectionViewController.h>

@class MKPlaceTextBlockCell, NSMutableArray, NSString;

@protocol GEOEncyclopedicInfo, MKPlaceCardEncyclopedicControllerDelegate;

__attribute__((visibility("hidden")))
@interface MKPlaceEncyclopedicViewController : MKPlaceSectionViewController

{
    _Bool _textBlockExpanded;
    MKPlaceTextBlockCell *_textCell;
    NSMutableArray *_factoidCells;
    id <GEOEncyclopedicInfo> _encyclopedicInfo;
    id <MKPlaceCardEncyclopedicControllerDelegate> _encyclopedicControllerDelegate;
}

@property (retain, nonatomic) id <GEOEncyclopedicInfo> encyclopedicInfo;
@property (weak, nonatomic) id <MKPlaceCardEncyclopedicControllerDelegate> encyclopedicControllerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;
- (void)_updateViews;
- (id)_textBlockTitle;
- (void)_viewEncyclopedicContent;
- (id)_factoids;
- (id)_textBlockText;

@end
