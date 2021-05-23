/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <UIKit/UICollectionViewController.h>

@class MiroAutoEditController, MiroMemory, NSArray, NSMutableDictionary, NSString, PHFetchResult, Project, UIAlertController, UIBarButtonItem, UIProgressView, UIView, VEKProduction, VEKResult;

@interface PMDebugCollectionViewController : UICollectionViewController

{
    _Bool _isSaveMode;
    _Bool _textOnly;
    _Bool _hackReuseCell;
    _Bool _cancelled;
    _Bool _syncPreview;
    VEKProduction *_production;
    VEKResult *_result;
    unsigned long long _currentSortType;
    NSArray *_sortTitles;
    MiroAutoEditController *_autoEditController;
    NSMutableDictionary *_projectMoodNamedTransitions;
    PHFetchResult *_curatedAssets;
    UIBarButtonItem *_sortBarButton;
    UIProgressView *_progressView;
    UIAlertController *_alertController;
    UIView *_textContainerView;
    MiroMemory *_memory;
    Project *_project;
}

@property (nonatomic) unsigned long long currentSortType;
@property (retain, nonatomic) NSArray *sortTitles;
@property (retain, nonatomic) MiroAutoEditController *autoEditController;
@property (retain, nonatomic) NSMutableDictionary *projectMoodNamedTransitions;
@property (nonatomic) _Bool isSaveMode;
@property (nonatomic) _Bool textOnly;
@property (nonatomic) _Bool hackReuseCell;
@property (retain, nonatomic) PHFetchResult *curatedAssets;
@property _Bool cancelled;
@property (weak, nonatomic) UIBarButtonItem *sortBarButton;
@property (retain, nonatomic) UIProgressView *progressView;
@property (retain, nonatomic) UIAlertController *alertController;
@property (retain, nonatomic) UIView *textContainerView;
@property _Bool syncPreview;
@property (retain, nonatomic) MiroMemory *memory;
@property (retain, nonatomic) Project *project;
@property (retain, nonatomic) VEKProduction *production;
@property (retain, nonatomic) VEKResult *result;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)didReceiveMemoryWarning;
- (void)done:(id)arg1;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)createDebugGraphics;
- (void)pickInfoAndAsset:(id *)arg1 asset:(id *)arg2 fromIndexPath:(id *)arg3;
- (void)closeMemoryTransition:(id)arg1;
- (void)presentAirDropControllerWithDebugString:(id)arg1;
- (id)requestedSongString;
- (id)logFeaturedPeopleInMemory;
- (id)replaceEmojiWithPrintName:(id)arg1;
- (void)showTextViewWith:(id)arg1;
- (id)prettyTransitionNameFromID:(id)arg1 fromBlueprint:(id)arg2;
- (void)resetMemoryToCleanState:(id)arg1;
- (void)saveDebugPanelForMemory:(id)arg1;
- (void)showMemoryTransitions;
- (void)showScoreLog;
- (void)showTextVersion;
- (void)showProject;
- (id)makeEnhancedStringFromPlainOne:(id)arg1;
- (void)drawImageInContext:(id)arg1 andFrame:(struct CGRect)arg2;
- (void)drawSeperatingBorderInRect:(struct CGRect)arg1 withColor:(id)arg2;
- (id)makeEnhancedStringFromPlainOne:(id)arg1 size:(int)arg2;
- (unsigned long long)_getCurrentCountOfItems;
- (void)writeTextToImageContextWithSize:(struct CGSize)arg1;
- (void)writeTextToImageContextWithSize:(struct CGSize)arg1 andCell:(id)arg2 andLocation:(struct CGPoint)arg3;
- (id)createDebugPageWithInfoWithStartingIndex:(unsigned long long)arg1 andEndingIndex:(unsigned long long)arg2;
- (void)presentAirdropControllerWithDebugImageArray:(id)arg1;
- (void)bringUpActions:(id)arg1;
- (void)bringUpSortOptions:(id)arg1;
- (void)presentModelImageViewWithImage:(id)arg1;
- (unsigned long long)numberRowsWithCurrentCount;
- (void)presentAirdropControllerWithDebugImage:(id)arg1;

@end
