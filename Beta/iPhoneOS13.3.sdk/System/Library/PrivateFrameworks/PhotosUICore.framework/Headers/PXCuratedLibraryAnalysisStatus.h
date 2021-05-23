/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <PhotosUICore/PXObservable.h>

@class NSString, NSTimer, PXCuratedLibraryAssetsDataSourceManager;

@protocol PXCuratedLibraryEventLogger;

@interface PXCuratedLibraryAnalysisStatus : PXObservable

{
    long long _numberOfRequestsToCycleThroughAlternateTitles;
    NSTimer *_alternateTitleTimer;
    _Bool _isDaysMonthsYearsStructureEnabled;
    _Bool _isDevicePlugged;
    _Bool _hasBattery;
    float _progress;
    float _displayProgress;
    PXCuratedLibraryAssetsDataSourceManager *_dataSourceManager;
    id <PXCuratedLibraryEventLogger> _eventLogger;
    long long _state;
    NSString *_localizedTitle;
    NSString *_localizedDescription;
    long long _alternateTitleIndex;
}

@property (nonatomic, readonly) long long alternateTitleIndex;
@property (nonatomic, readonly) _Bool hasBattery;
@property (nonatomic, readonly) PXCuratedLibraryAssetsDataSourceManager *dataSourceManager;
@property (retain, nonatomic) id <PXCuratedLibraryEventLogger> eventLogger;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) NSString *localizedTitle;
@property (nonatomic, readonly) NSString *localizedDescription;
@property (nonatomic, readonly) float progress;
@property (nonatomic, readonly) float displayProgress;
@property (nonatomic, readonly) _Bool isDaysMonthsYearsStructureEnabled;
@property (nonatomic, readonly) _Bool isDevicePlugged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)setLocalizedDescription:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setProgress:(float)arg1;
- (void)didPerformChanges;
- (id)initWithDataSourceManager:(id)arg1;
- (void)alternateTitleIndexDidChange;
- (void)setIsDevicePlugged:(_Bool)arg1;
- (void)setIsDaysMonthsYearsStructureEnabled:(_Bool)arg1;
- (void)setDisplayProgress:(float)arg1;
- (id)_initWithDataSourceManager:(id)arg1;
- (void)startCyclingThroughAlternateTitles;
- (void)stopCyclingThroughAlternateTitles;
- (void)_handleAlternateTitleTimer:(id)arg1;
- (void)cycleToNextAlternateTitle;
- (void)_updateEventLogging;

@end
