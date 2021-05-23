/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXMemoriesUIViewController.h>

@class NSString, PXFeedBasedMemoriesDataSourceManager;

@protocol PXForYouMemoriesViewControllerDelegate;

@interface PXForYouMemoriesViewController : PXMemoriesUIViewController

{
    _Bool _shouldHandleEntireDataSource;
    id <PXForYouMemoriesViewControllerDelegate> _delegate;
    unsigned long long _rowType;
    struct _NSRange _dataSourceRange;
}

@property (nonatomic, readonly) _Bool shouldHandleEntireDataSource;
@property (nonatomic, readonly) PXFeedBasedMemoriesDataSourceManager *dataSourceManager;
@property (weak, nonatomic) id <PXForYouMemoriesViewControllerDelegate> delegate;
@property (nonatomic) struct _NSRange dataSourceRange;
@property (nonatomic) unsigned long long rowType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long userInterfaceFeature;
@property (nonatomic, readonly) _Bool keepsSourceRegionOfInterestContent;

- (void)viewDidLoad;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (id)initWithDataSourceManager:(id)arg1;
- (void)scrollViewControllerWillEndScrolling:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (id)createNewLayoutGenerator;

@end
