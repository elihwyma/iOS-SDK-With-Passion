/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString, PXMediaProvider;

@protocol PXDisplayAsset;

@interface PXGridInlinePlaybackRecord : NSObject

{
    _Bool _isInvalid;
    float _videoScore;
    float _curationScore;
    id <PXDisplayAsset> _displayAsset;
    PXMediaProvider *_mediaProvider;
    id _geometryReference;
    long long _desiredPlayState;
    long long _visibilityScore;
    double _distanceToCenterScore;
    double _cellSizeScore;
    NSString *_diagnosticLog;
    CDStruct_e83c9415 _bestVideoTimeRange;
}

@property (nonatomic) long long visibilityScore;
@property (nonatomic) double distanceToCenterScore;
@property (nonatomic) double cellSizeScore;
@property (nonatomic) _Bool isInvalid;
@property (copy, readonly) NSString *diagnosticScoresDescription;
@property (copy) NSString *diagnosticLog;
@property (nonatomic, readonly) id <PXDisplayAsset> displayAsset;
@property (nonatomic, readonly) PXMediaProvider *mediaProvider;
@property (nonatomic, readonly) id geometryReference;
@property (nonatomic) long long desiredPlayState;
@property (nonatomic, readonly) _Bool isPlaying;
@property (nonatomic, readonly) CDStruct_e83c9415 bestVideoTimeRange;
@property (nonatomic, readonly) float videoScore;
@property (nonatomic, readonly) float curationScore;

- (id)description;
- (void)prepareForVisible;
- (void)prepareForInvisible;
- (id)initWithDisplayAsset:(id)arg1 mediaProvider:(id)arg2 geometryReference:(id)arg3;

@end
