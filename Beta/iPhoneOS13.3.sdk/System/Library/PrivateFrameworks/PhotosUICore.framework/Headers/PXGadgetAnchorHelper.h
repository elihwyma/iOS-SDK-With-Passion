/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class PXGadgetDataSourceManager, PXGadgetNavigationHelper;

@protocol PXGadget, PXGadgetAnchorHelperDelegate;

@interface PXGadgetAnchorHelper : NSObject

{
    id <PXGadgetAnchorHelperDelegate> _delegate;
    long long _anchorPosition;
    id <PXGadget> _currentAnchor;
    PXGadgetNavigationHelper *_navigationHelper;
    PXGadgetDataSourceManager *_dataSourceManager;
}

@property (retain, nonatomic) id <PXGadget> currentAnchor;
@property (retain, nonatomic) PXGadgetNavigationHelper *navigationHelper;
@property (retain, nonatomic) PXGadgetDataSourceManager *dataSourceManager;
@property (weak, nonatomic) id <PXGadgetAnchorHelperDelegate> delegate;
@property (nonatomic) long long anchorPosition;
@property (nonatomic, readonly) _Bool hasAnchor;

- (id)initWithNavigationHelper:(id)arg1 dataSourceManager:(id)arg2;
- (void)saveAnchor;
- (void)saveGadgetAsAnchor:(id)arg1;
- (void)clearAnchor;
- (void)navigateToAnchorIfNeeded;
- (id)_generateAnchor;
- (id)_convertIndexPathToGadget:(id)arg1;

@end
