/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
 */

#import <OpusFoundation/OFUIViewController.h>

@class NSOperationQueue, NSString, OFUIGridView;

@interface OFUIGridViewController : OFUIViewController

{
    unsigned long long _gridViewStyle;
    NSOperationQueue *_operationQueue;
    _Bool _hideWhenDeviceRotates;
    _Bool _maintainPercentageScrolledWhenDeviceRotates;
    OFUIGridView *_gridView;
}

@property (retain, nonatomic) OFUIGridView *gridView;
@property (retain, nonatomic, readonly) NSOperationQueue *operationQueue;
@property (nonatomic) _Bool hideWhenDeviceRotates;
@property (nonatomic) _Bool maintainPercentageScrolledWhenDeviceRotates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (Class)gridViewClass;

- (id)init;
- (void)dealloc;
- (void)commonInit;
- (void)loadView;
- (id)initWithStyle:(unsigned long long)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)setEditing:(_Bool)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)viewWillUnload;
- (void)viewDidUnload;
- (void)didReceiveMemoryWarning;
- (void)cancelAllOperations:(_Bool)arg1;
- (struct CGPoint)draggingSource:(id)arg1 badgeCenterForItem:(id)arg2;
- (struct CGRect)draggingSource:(id)arg1 originalFrameForItem:(id)arg2;
- (void)draggingSource:(id)arg1 prepareItem:(id)arg2;
- (void)draggingSource:(id)arg1 cleanupItem:(id)arg2;
- (void)updateDisplayedCellOperationsPriority:(id)arg1;
- (long long)numberOfCellsInGridView:(id)arg1;
- (id)gridView:(id)arg1 cellAtIndex:(unsigned long long)arg2;
- (void)updateDisplayedCellsOperationsPriority;

@end
