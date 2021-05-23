/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <VideosUI/VUILibraryFetchControllerViewController.h>

#import <VideosUI/Swift-Protocol.h>

@class NSArray, NSObject, NSString, VUISeasonPickerCollectionViewCell, _VUISeasonPickerView;

@protocol VUIMediaEntityIdentifier;

__attribute__((visibility("hidden")))
@interface VUISeasonPickerViewController : VUILibraryFetchControllerViewController <Swift>

{
    VUISeasonPickerCollectionViewCell *_sizingCell;
    _Bool _lastViewedSeasonWasManuallyDeleted;
    NSString *_pickerTitle;
    _VUISeasonPickerView *_seasonPickerView;
    NSArray *_seasons;
    NSObject<VUIMediaEntityIdentifier> *_collectionIdentifier;
    VUILibraryFetchControllerViewController *_currentSeasonViewController;
}

@property (retain, nonatomic) _VUISeasonPickerView *seasonPickerView;
@property (retain, nonatomic) NSArray *seasons;
@property (retain, nonatomic) NSObject<VUIMediaEntityIdentifier> *collectionIdentifier;
@property (retain, nonatomic) VUILibraryFetchControllerViewController *currentSeasonViewController;
@property (nonatomic) _Bool lastViewedSeasonWasManuallyDeleted;
@property (retain, nonatomic) NSString *pickerTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didCompleteWithResult:(id)arg3;
- (void)controller:(id)arg1 fetchRequests:(id)arg2 didFailWithError:(id)arg3;
- (id)initWithMediaLibrary:(id)arg1 title:(id)arg2 collectionIdentifier:(id)arg3;

@end
