/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXSectionedDataSourceManager.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSArray, NSString, PXSectionedDataSource;

@protocol PXDeferrableDataSourceManagerDelegate;

@interface PXDeferrableDataSourceManager : PXSectionedDataSourceManager <Swift>

{
    PXSectionedDataSourceManager *_underlyingDataSourceManager;
    _Bool _hasInitialDataSource;
    _Bool _clientIsHandlingDataSourceTransition;
    PXSectionedDataSource *_pendingDataSource;
    NSArray *_pendingDataSourceChangeDetails;
    id <PXDeferrableDataSourceManagerDelegate> _delegate;
}

@property (weak, nonatomic) id <PXDeferrableDataSourceManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)initWithDataSourceManager:(id)arg1;
- (id)changeDetailsFromDataSource:(id)arg1 toDataSource:(id)arg2;
- (void)setDataSource:(id)arg1 changeDetails:(id)arg2;
- (void)setDataSource:(id)arg1 changeDetailsArray:(id)arg2;
- (void)_finishTransitionToDataSource:(id)arg1 changeDetailsArray:(id)arg2;
- (void)_internal_setDataSource:(id)arg1 changeDetailsArray:(id)arg2;
- (id)createInitialDataSource;
- (_Bool)_canAttemptDataSourceChanges;
- (void)_setPendingDataSource:(id)arg1 changeDetailsArray:(id)arg2;
- (void)resumeDataSourceChanges;

@end
