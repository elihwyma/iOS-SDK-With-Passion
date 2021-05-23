/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class BEAlertController, NSArray, NSString, NSTimer, Project;

@protocol ExportDelegate, MovieControllerExportProtocol;

__attribute__((visibility("hidden")))
@interface ExportController : NSObject

{
    Project *m_project;
    NSArray *m_presets;
    unsigned long long m_exportingIndexPresets;
    NSString *m_currentPreset;
    id m_delegate;
    id <MovieControllerExportProtocol> m_movieController;
    NSString *m_exportPath;
    _Bool m_exportToPhotos;
    NSTimer *m_progressTimer;
    _Bool m_inTestMode;
    _Bool m_usingExistingRenderFile;
    BEAlertController *m_testModeAutoExportCompletedAlert;
    NSArray *_exportedPaths;
    double _exportAspect;
}

@property (retain, nonatomic) Project *project;
@property (retain, nonatomic) NSArray *presets;
@property (retain, nonatomic) NSString *currentPreset;
@property (weak, nonatomic) id <ExportDelegate> delegate;
@property (retain, nonatomic) id <MovieControllerExportProtocol> movieController;
@property (retain, nonatomic) NSString *exportPath;
@property (retain, nonatomic) NSArray *exportedPaths;
@property (nonatomic) _Bool exportToPhotos;
@property (retain, nonatomic) NSTimer *progressTimer;
@property (nonatomic) unsigned long long exportingIndexPresets;
@property (nonatomic) double exportAspect;
@property (retain, nonatomic) BEAlertController *testModeAutoExportCompletedAlert;

+ (unsigned long long)audioDataRateForPreset:(id)arg1;
+ (_Bool)inTestMode;
+ (id)testModeProjectBundle;
+ (unsigned long long)testModeRepeatCount;
+ (unsigned long long)dataRateForPreset:(id)arg1;
+ (unsigned long long)videoDataRateForPreset:(id)arg1;
+ (unsigned long long)dataRateForiCloudHD;
+ (unsigned long long)dataRateForiCloud4G;
+ (_Bool)testModeCopyToCameraRoll;
+ (_Bool)testModeNoDialogAtEnd;
+ (void)exitTestMode;
+ (Class)exportControllerClass;
+ (id)testModeProjectPlaceholder;
+ (id)testModeProject:(id)arg1;
+ (unsigned long long)testModeType;
+ (unsigned long long)testModeMaxFrameToProcess;
+ (id)currentTitle:(unsigned long long)arg1;
+ (unsigned long long)estimatedVideoFileSizeForDuration:(int)arg1 frameRate:(double)arg2 preset:(id)arg3 project:(id)arg4;

- (void)dealloc;
- (float)progress;
- (void)cancelExport;
- (id)thumbnailImage;
- (void)closeSession;
- (void)stopProgressTimer;
- (void)startProgressTimer;
- (void)nextPreset;
- (id)hasExistingFile;
- (void)updateProgressViewWithProgress:(float)arg1 reduced:(_Bool)arg2;
- (void)continueExportAfterDelay;
- (void)informDelegateOfCompletion;
- (void)serviceProgressTimer:(id)arg1;
- (void)beginAsynchronousExport;
- (void)noteSessionProgressed:(float)arg1;
- (id)metadataToAdd;
- (id)initWithWithProject:(id)arg1 presets:(id)arg2 exportToPhotos:(_Bool)arg3 delegate:(id)arg4;
- (void)createMovieController;
- (void)releaseMovieController;
- (void)writeVideoFileToSavedPhotoAlbum:(id)arg1;
- (void)displayError:(id)arg1;
- (void)displayExportedToPhotos;
- (void)displayDiskSpaceError;
- (void)displayAlertTitle:(id)arg1 message:(id)arg2;

@end
