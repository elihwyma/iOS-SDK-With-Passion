/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class SBSceneManagerCoordinator, _SBScreenshotPersistenceCoordinator;

@protocol SBScreenshotManagerDataSource;

@interface SBScreenshotManager : NSObject

{
    SBSceneManagerCoordinator *_sceneManagerCoordinator;
    _SBScreenshotPersistenceCoordinator *_persistenceCoordinator;
    id <SBScreenshotManagerDataSource> _dataSource;
}

@property (retain, nonatomic, getter=_sceneManagerCoordinator, setter=_setSceneManagerCoordinator:) SBSceneManagerCoordinator *sceneManagerCoordinator;
@property (retain, nonatomic, getter=_persistenceCoordinator, setter=_setPersistenceCoordinator:) _SBScreenshotPersistenceCoordinator *persistenceCoordinator;
@property (nonatomic, readonly) id <SBScreenshotManagerDataSource> dataSource;

- (id)initWithDataSource:(id)arg1;
- (void)saveScreenshots;
- (id)_initWithDataSource:(id)arg1 persistenceCoordinator:(id)arg2 sceneManagerCoordinator:(id)arg3;
- (void)saveScreenshotsWithCompletion:(CDUnknownBlockType)arg1;
- (id)_fetchEligibleScreenshotProvidersForSnapshotting;
- (id)_providerForScreen:(id)arg1;

@end
