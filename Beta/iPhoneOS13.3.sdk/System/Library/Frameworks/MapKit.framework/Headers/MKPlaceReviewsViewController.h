/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/MKPlaceSectionViewController.h>

@class MKMapItem, MKPlaceReviewAvatarGenerator, NSArray, NSMutableArray, NSString;

@protocol MKPlaceCardReviewsControllerDelegate><MKPlaceCardActionControllerDelegate;

__attribute__((visibility("hidden")))
@interface MKPlaceReviewsViewController : MKPlaceSectionViewController

{
    MKMapItem *_mapItem;
    id <MKPlaceCardReviewsControllerDelegate><MKPlaceCardActionControllerDelegate> _reviewsControllerDelegate;
    MKPlaceReviewAvatarGenerator *_avatarGenerator;
    NSArray *_userSnippets;
    NSMutableArray *_cells;
}

@property (retain, nonatomic) MKPlaceReviewAvatarGenerator *avatarGenerator;
@property (retain, nonatomic) NSArray *userSnippets;
@property (retain, nonatomic) NSMutableArray *cells;
@property (retain, nonatomic) MKMapItem *mapItem;
@property (weak, nonatomic) id <MKPlaceCardReviewsControllerDelegate><MKPlaceCardActionControllerDelegate> reviewsControllerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewDidLoad;
- (_Bool)_canShowWhileLocked;
- (unsigned long long)reviewsCount;
- (id)reviewAtIndex:(unsigned long long)arg1;
- (void)sectionView:(id)arg1 didSelectRow:(id)arg2 atIndex:(unsigned long long)arg3;
- (id)infoCardChildPossibleActions;
- (id)infoCardChildUnactionableUIElements;
- (void)_updateAttribution;
- (void)_viewAllReviews;
- (void)loadCells;
- (void)_showReview:(id)arg1 index:(unsigned long long)arg2;

@end
