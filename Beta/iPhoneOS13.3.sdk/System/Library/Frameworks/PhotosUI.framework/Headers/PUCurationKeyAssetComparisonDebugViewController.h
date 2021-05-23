/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <PhotosUI/PUPhotosAlbumViewController.h>

#import <PhotosUI/Swift-Protocol.h>

@class NSArray, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface PUCurationKeyAssetComparisonDebugViewController : PUPhotosAlbumViewController <Swift>

{
    NSArray *_highlights;
    NSMutableArray *_currentKeyAssets;
    NSMutableArray *_legacyKeyAssets;
    NSMutableArray *_modernKeyAssets;
    NSMutableArray *_keyAssetReasons;
    NSMutableArray *_indexMap;
    NSArray *_visibleAssets;
    _Bool _showsDifferentOnly;
    _Bool _showsMeaningsOnly;
    _Bool _canLiveUpdate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)_fetchHighlights;
- (_Bool)shouldShowSectionHeaders;
- (void)toggleShowsDifferentOnly:(id)arg1;
- (void)toggleShowsMeaningsOnly:(id)arg1;
- (void)updateData;
- (void)didTapHeaderView:(id)arg1;

@end
