/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class NSString, PETDistributionEventTracker;

@interface SBFolderStatsQueryableMetric : NSObject

{
    PETDistributionEventTracker *_dockAppsTracker;
    PETDistributionEventTracker *_dockFoldersTracker;
    PETDistributionEventTracker *_dockItemsTracker;
    PETDistributionEventTracker *_pageTracker;
    PETDistributionEventTracker *_folderTracker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (_Bool)handleEvent:(unsigned long long)arg1 withContext:(id)arg2;

@end
