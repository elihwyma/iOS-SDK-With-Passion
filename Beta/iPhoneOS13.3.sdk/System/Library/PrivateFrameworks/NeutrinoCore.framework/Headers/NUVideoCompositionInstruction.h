/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

#import <NeutrinoCore/Swift-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, NUColorSpace, NUComposition, NURenderContext, NURenderJob;

@interface NUVideoCompositionInstruction : NSObject <Swift>

{
    NSMutableDictionary *_sourceIdentifiersByTrackID;
    NSArray *_requiredSourceTrackIDs;
    NURenderJob *_renderJob;
    NURenderContext *_renderContext;
    NUComposition *_adjustmentComposition;
    NSArray *_pipelineFilters;
    NUColorSpace *_colorSpace;
    long long _sampleMode;
    CDStruct_1e2b2e48 _renderScale;
    CDStruct_e83c9415 _timeRange;
}

@property (nonatomic) CDStruct_e83c9415 timeRange;
@property (retain, nonatomic) NSArray *requiredSourceTrackIDs;
@property (weak, nonatomic) NURenderJob *renderJob;
@property (retain) NURenderContext *renderContext;
@property (retain, nonatomic) NUComposition *adjustmentComposition;
@property (retain, nonatomic) NSArray *pipelineFilters;
@property (nonatomic) CDStruct_912cb5d2 renderScale;
@property (retain, nonatomic) NUColorSpace *colorSpace;
@property (nonatomic) long long sampleMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool enablePostProcessing;
@property (nonatomic, readonly) _Bool containsTweening;
@property (nonatomic, readonly) int passthroughTrackID;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setSourceIdentifier:(id)arg1 forTrackID:(id)arg2;
- (id)sourceIdentifierForTrackID:(id)arg1;
- (_Bool)isEqualToInstruction:(id)arg1;

@end
