/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXObservable.h>

@class NSMutableArray, PXSectionedChangeDetailsRepository, PXSectionedDataSource;

@interface PXSectionedDataSourceManager : PXObservable

{
    NSMutableArray *_waitingConditions;
    PXSectionedDataSource *_dataSource;
    PXSectionedChangeDetailsRepository *_changeHistory;
}

@property (nonatomic, readonly) PXSectionedDataSource *dataSource;
@property (nonatomic, readonly) PXSectionedChangeDetailsRepository *changeHistory;

- (id)init;
- (void)_setDataSource:(id)arg1;
- (void)registerChangeObserver:(id)arg1 context:(void *)arg2;
- (id)mutableChangeObject;
- (void)didPublishChanges;
- (void)unregisterChangeObserver:(id)arg1 context:(void *)arg2;
- (id)changeDetailsFromDataSource:(id)arg1 toDataSource:(id)arg2;
- (void)setDataSource:(id)arg1 changeDetails:(id)arg2;
- (void)setDataSource:(id)arg1 changeDetailsArray:(id)arg2;
- (id)createInitialDataSource;
- (void)waitForCondition:(CDUnknownBlockType)arg1 timeout:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_reevaluateWaitingConditions;
- (void)_waitingConditionDidTimeout:(id)arg1;
- (id)queryObserversInterestingObjectReferences;

@end
