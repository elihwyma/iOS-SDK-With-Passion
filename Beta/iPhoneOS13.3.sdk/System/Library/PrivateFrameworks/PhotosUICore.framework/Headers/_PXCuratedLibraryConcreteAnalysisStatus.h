/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXCuratedLibraryAnalysisStatus.h>

#import <PhotosUICore/Swift-Protocol.h>

@class NSString;

@interface _PXCuratedLibraryConcreteAnalysisStatus : PXCuratedLibraryAnalysisStatus <Swift>

@property (nonatomic, readonly) _Bool isDeviceUnplugged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)hasBattery;
- (void)_batteryStateDidChange:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)initWithDataSourceManager:(id)arg1;
- (void)alternateTitleIndexDidChange;
- (void)_updateStatusProperties;
- (float)_enrichmentProgressForDataSource:(id)arg1;
- (long long)_analyzingStateForDataSource:(id)arg1;
- (void)_configureBatteryMonitoring;

@end
