/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@class JTComposition, NSArray, NSString, NSTimer, UIImage;

@protocol ExportDelegate;

@interface JTExportController : NSObject

{
    _Bool _usingExistingRenderFile;
    _Bool _cancel;
    JTComposition *_composition;
    NSArray *_presets;
    NSString *_currentPreset;
    UIImage *_poster;
    id <ExportDelegate> _delegate;
    NSString *_exportPath;
    NSTimer *_progressTimer;
    unsigned long long _exportingIndexPresets;
    long long _status;
}

@property (retain, nonatomic) JTComposition *composition;
@property (retain, nonatomic) NSArray *presets;
@property (retain, nonatomic) NSString *currentPreset;
@property (retain, nonatomic) UIImage *poster;
@property (retain, nonatomic) id <ExportDelegate> delegate;
@property (retain, nonatomic) NSString *exportPath;
@property (nonatomic) _Bool usingExistingRenderFile;
@property (retain, nonatomic) NSTimer *progressTimer;
@property (nonatomic) unsigned long long exportingIndexPresets;
@property (nonatomic) _Bool cancel;
@property (nonatomic) long long status;

+ (unsigned long long)dataRateForPreset:(id)arg1 size:(struct CGSize)arg2;
+ (unsigned long long)videoDataRateForPreset:(id)arg1 size:(struct CGSize)arg2;
+ (unsigned long long)audioDataRateForPreset:(id)arg1;
+ (unsigned long long)estimatedFileSizeForDuration:(int)arg1 frameRate:(double)arg2 preset:(id)arg3 size:(struct CGSize)arg4;

- (void)dealloc;
- (float)progress;
- (void)cancelExport;
- (void)closeSession;
- (void)stopProgressTimer;
- (void)startProgressTimer;
- (void)nextPreset;
- (id)hasExistingFile;
- (void)updateProgressViewWithProgress:(float)arg1 reduced:(_Bool)arg2;
- (void)continueExportAfterDelay;
- (void)informDelegateOfCompletion;
- (void)serviceProgressTimer:(id)arg1;
- (id)initWithWithComposition:(id)arg1 presets:(id)arg2 toFile:(id)arg3 poster:(id)arg4 delegate:(id)arg5;
- (void)beginAsynchronousExport;
- (void)noteSessionProgressed:(float)arg1;
- (id)metadataToAdd;

@end
