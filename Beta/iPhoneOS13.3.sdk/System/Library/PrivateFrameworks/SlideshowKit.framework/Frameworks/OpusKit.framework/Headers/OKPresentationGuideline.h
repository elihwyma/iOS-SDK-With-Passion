/*
 Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
 */

#import <Foundation/NSObject.h>

@class NSString, OKMediaItem, OKPresentation, OKPresentationCanvas, OKProducerPlugin;

@interface OKPresentationGuideline : NSObject

{
    OKPresentation *_presentation;
    unsigned long long _type;
    double _timestamp;
    NSString *_key;
    id _value;
    OKMediaItem *_mediaItem;
    NSString *_mediaItemUniqueURLString;
    OKPresentationCanvas *_presentationCanvas;
    unsigned long long _presentationCanvasType;
    NSString *_presentationCanvasKeyPath;
    OKProducerPlugin *_producerPlugin;
    NSString *_producerPluginUUID;
}

@property (nonatomic) OKPresentation *presentation;
@property (nonatomic) unsigned long long type;
@property (nonatomic, readonly) double timestamp;
@property (copy, nonatomic) NSString *key;
@property (retain, nonatomic) id value;
@property (retain, nonatomic) OKMediaItem *mediaItem;
@property (retain, nonatomic) OKProducerPlugin *producerPlugin;
@property (retain, nonatomic) OKPresentationCanvas *presentationCanvas;

+ (id)guidelineAuthoringTransitionSettings:(id)arg1;
+ (id)guidelineAuthoringDefaultMobileRecommendedResolutionSizes;
+ (id)guidelineLiveAuthoringEnabled:(_Bool)arg1;
+ (id)guidelineAuthoringTitle:(id)arg1;
+ (id)guidelineAuthoringRecommendedResolutionSizes:(id)arg1;
+ (id)guidelineWithType:(unsigned long long)arg1 key:(id)arg2 value:(id)arg3;
+ (id)defaultMobileRecommendedResolutionSizes;
+ (id)globalUniqueKeyForKey:(id)arg1;
+ (id)globalUniqueKeyForKey:(id)arg1 mediaItem:(id)arg2;
+ (id)globalUniqueKeyForKey:(id)arg1 presentationCanvas:(id)arg2;
+ (id)globalUniqueKeyForKey:(id)arg1 producerPlugin:(id)arg2;
+ (id)globalUniqueKeyForKey:(id)arg1 mediaItem:(id)arg2 presentationCanvas:(id)arg3 producerPlugin:(id)arg4;
+ (id)guidelineAuthoringRandomSeed:(unsigned long long)arg1;
+ (id)guidelineAuthoringSynopsis:(id)arg1;
+ (id)guidelineAuthoringAudioURLs:(id)arg1;
+ (id)guidelineAuthoringAttributedTitle:(id)arg1;
+ (id)guidelineAuthoringInteractiveTransitionSettings:(id)arg1;
+ (id)guidelineAuthoringMediaAttributes:(id)arg1;
+ (id)guidelineAuthoringPageDuration:(double)arg1;
+ (id)guidelineAuthoringCurrentPageDuration:(double)arg1;
+ (id)guidelineAuthoringTotalDuration:(double)arg1;
+ (id)guidelineAuthoringDurationFactor:(double)arg1;
+ (id)guidelineAuthoringMinimumDuration:(double)arg1;
+ (id)guidelineAuthoringMaximumDuration:(double)arg1;
+ (id)guidelineAuthoringFitToAudioDuration:(_Bool)arg1;
+ (id)guidelineAuthoringDebuggingEnabled:(_Bool)arg1;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionary;
- (id)initWithDictionary:(id)arg1;
- (id)initWithType:(unsigned long long)arg1;
- (id)initWithType:(unsigned long long)arg1 key:(id)arg2 value:(id)arg3;
- (id)presentationCanvasKeyPath;
- (id)globalUniqueKey;

@end
