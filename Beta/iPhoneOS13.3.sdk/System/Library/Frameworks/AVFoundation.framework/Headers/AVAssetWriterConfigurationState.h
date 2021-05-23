/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVMediaFileType, NSArray, NSURL;

@protocol AVAssetWriterDelegate;

__attribute__((visibility("hidden")))
@interface AVAssetWriterConfigurationState : NSObject

{
    NSURL *_URL;
    id <AVAssetWriterDelegate> _delegate;
    AVMediaFileType *_mediaFileType;
    CDStruct_1b6d18a9 _movieFragmentInterval;
    CDStruct_1b6d18a9 _overallDurationHint;
    _Bool _shouldOptimizeForNetworkUse;
    NSURL *_directoryForTemporaryFiles;
    NSArray *_metadataItems;
    int _movieTimeScale;
    struct CGAffineTransform _preferredTransform;
    float _preferredVolume;
    float _preferredRate;
    long long _singlePassFileSize;
    long long _singlePassMediaDataSize;
    NSArray *_inputs;
    NSArray *_inputGroups;
}

@property (copy, nonatomic) NSURL *URL;
@property (weak) id <AVAssetWriterDelegate> delegate;
@property (copy, nonatomic) AVMediaFileType *mediaFileType;
@property (nonatomic) CDStruct_1b6d18a9 movieFragmentInterval;
@property (nonatomic) CDStruct_1b6d18a9 overallDurationHint;
@property (nonatomic) _Bool shouldOptimizeForNetworkUse;
@property (copy, nonatomic) NSURL *directoryForTemporaryFiles;
@property (copy, nonatomic) NSArray *metadataItems;
@property (nonatomic) int movieTimeScale;
@property (nonatomic) struct CGAffineTransform preferredTransform;
@property (nonatomic) float preferredVolume;
@property (nonatomic) float preferredRate;
@property (nonatomic) long long singlePassFileSize;
@property (nonatomic) long long singlePassMediaDataSize;
@property (copy, nonatomic) NSArray *inputs;
@property (copy, nonatomic) NSArray *inputGroups;

- (void)dealloc;

@end
