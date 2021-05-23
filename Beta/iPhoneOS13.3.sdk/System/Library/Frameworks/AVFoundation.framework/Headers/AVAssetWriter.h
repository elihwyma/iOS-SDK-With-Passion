/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVAssetWriterHelper, AVAssetWriterInternal, NSArray, NSError, NSString, NSURL;

@protocol AVAssetWriterDelegate;

@interface AVAssetWriter : NSObject

{
    AVAssetWriterInternal *_internal;
}

@property (retain, readonly, getter=_helper) AVAssetWriterHelper *helper;
@property (weak) id <AVAssetWriterDelegate> delegate;
@property (copy, nonatomic, readonly) NSURL *outputURL;
@property (copy, nonatomic, readonly) NSString *outputFileType;
@property (nonatomic, readonly) NSArray *availableMediaTypes;
@property (readonly) long long status;
@property (readonly) NSError *error;
@property (copy, nonatomic) NSArray *metadata;
@property (nonatomic) _Bool shouldOptimizeForNetworkUse;
@property (copy, nonatomic) NSURL *directoryForTemporaryFiles;
@property (nonatomic, readonly) NSArray *inputs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (void)initialize;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)_errorForOSStatus:(int)arg1;
+ (id)assetWriterWithURL:(id)arg1 fileType:(id)arg2 error:(id *)arg3;

- (id)init;
- (void)dealloc;
- (_Bool)finishWriting;
- (void)flush;
- (struct CGAffineTransform)preferredTransform;
- (_Bool)canAddInput:(id)arg1;
- (void)addInput:(id)arg1;
- (CDStruct_1b6d18a9)overallDurationHint;
- (id)initWithURL:(id)arg1 fileType:(id)arg2 error:(id *)arg3;
- (_Bool)startWriting;
- (void)startSessionAtSourceTime:(CDStruct_1b6d18a9)arg1;
- (void)finishWritingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)declareKeyPathDependenciesWithRegistry:(id)arg1;
- (void)addCallbackToCancelDuringDeallocation:(id)arg1;
- (float)preferredRate;
- (float)preferredVolume;
- (void)setPreferredTransform:(struct CGAffineTransform)arg1;
- (void)setPreferredVolume:(float)arg1;
- (CDStruct_1b6d18a9)movieFragmentInterval;
- (void)setMovieFragmentInterval:(CDStruct_1b6d18a9)arg1;
- (void)setOverallDurationHint:(CDStruct_1b6d18a9)arg1;
- (int)movieTimeScale;
- (void)setMovieTimeScale:(int)arg1;
- (void)setPreferredRate:(float)arg1;
- (long long)singlePassFileSize;
- (long long)singlePassMediaDataSize;
- (id)inputGroups;
- (id)finishWritingDelegate;
- (_Bool)_initInternalObject;
- (_Bool)_setHelper:(id)arg1 ifCurrentHelper:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (_Bool)canApplyOutputSettings:(id)arg1 forMediaType:(id)arg2;
- (_Bool)canAddInputGroup:(id)arg1;
- (void)addInputGroup:(id)arg1;
- (void)endSessionAtSourceTime:(CDStruct_1b6d18a9)arg1;
- (void)cancelWriting;
- (id)initWithFileType:(id)arg1 error:(id *)arg2;
- (_Bool)_setHelper:(id)arg1 ifCurrentHelper:(id)arg2;
- (_Bool)_supportsSampleReferencesReturningError:(id *)arg1;
- (void)setWritesSinglePassUsingPredeterminedFileSize:(long long)arg1 mediaDataSize:(long long)arg2;
- (void)setFinishWritingDelegate:(id)arg1;
- (void)_transitionToFailedStatusWithError:(id)arg1;

@end
