/*
 Image: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, PVInstructionGraphNode;

@interface PVVideoCompositionInstruction : NSObject

{
    CDStruct_e83c9415 m_timeRange;
    _Bool m_enablePostProcessing;
    _Bool m_containsTweening;
    NSArray *m_requiredSourceTrackIDs;
    int m_passthroughTrackID;
    PVInstructionGraphNode *m_outputIGNode;
    _Bool _isFreezeFrame;
}

@property (nonatomic) CDStruct_e83c9415 timeRange;
@property (nonatomic) _Bool enablePostProcessing;
@property (nonatomic) _Bool containsTweening;
@property (nonatomic) _Bool isFreezeFrame;
@property (nonatomic, readonly) NSArray *requiredSourceTrackIDs;
@property (nonatomic, readonly) int passthroughTrackID;
@property (retain, nonatomic) PVInstructionGraphNode *outputNode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)unloadInstructionGraphNodes;
- (void)loadInstructionGraphNodes:(HGRef_6bae45d3)arg1;
- (id)videoInstructionDescription;

@end
