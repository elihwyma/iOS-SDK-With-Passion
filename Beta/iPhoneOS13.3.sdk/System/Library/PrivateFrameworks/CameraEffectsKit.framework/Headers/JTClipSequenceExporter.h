/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@class JTComposition, JTReaderWriterExportController, NSDate;

@protocol ExportDelegate, JTCompositionClipsDataSource;

@interface JTClipSequenceExporter : NSObject

{
    id <ExportDelegate> _delegate;
    id <JTCompositionClipsDataSource> _clipsDataSource;
    JTComposition *_composition;
    JTReaderWriterExportController *_exportController;
    NSDate *_exportStartTime;
    NSDate *_exportEndTime;
}

@property (retain, nonatomic) id <JTCompositionClipsDataSource> clipsDataSource;
@property (retain, nonatomic) JTComposition *composition;
@property (retain, nonatomic) JTReaderWriterExportController *exportController;
@property (retain) NSDate *exportStartTime;
@property (retain) NSDate *exportEndTime;
@property (retain, nonatomic) id <ExportDelegate> delegate;

- (void)dealloc;
- (void)cancel;
- (void)tearDown;
- (id)initWithClipsDataSource:(id)arg1;
- (void)startWithPresets:(id)arg1 toFilePath:(id)arg2 poster:(id)arg3;
- (void)didFinishExport:(long long)arg1;
- (void)exportProgressedTo:(float)arg1;
- (unsigned long long)estimatedFileSizeForDuration:(int)arg1 frameRate:(double)arg2 preset:(id)arg3;
- (double)timeElapsedDuringExport;

@end
