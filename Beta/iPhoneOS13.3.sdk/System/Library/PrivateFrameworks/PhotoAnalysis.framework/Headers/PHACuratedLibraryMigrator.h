/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PHACuratedLibraryMigrator : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)wantsLiveGraphUpdates;
- (_Bool)wantsGraphUpdateNotifications;
- (void)graphUpdateMadeProgress:(double)arg1;
- (void)graphUpdateIsConsistent;
- (void)graphUpdateDidStop;
- (void)delayMigrateCuratedLibraryActivity:(id)arg1;
- (void)migrateCuratedLibraryWithActivity:(id)arg1 executive:(id)arg2;

@end
