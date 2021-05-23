/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

#import <NeutrinoCore/Swift-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NURenderTagGroup;

@interface NURenderPipelineState : NSObject <Swift>

{
    NSMutableArray *_groupStack;
    long long _serialNumber;
    long long _evaluationMode;
    long long _mediaComponentType;
    long long _auxiliaryImageType;
    long long _sampleMode;
    long long _roundingPolicy;
    NSArray *_pipelineFilters;
    NSDictionary *_videoFrames;
    NURenderTagGroup *_rootGroup;
    NURenderTagGroup *_currentGroup;
    unsigned long long _groupCount;
    CDStruct_1e2b2e48 _scale;
    CDStruct_1b6d18a9 _time;
}

@property (readonly) long long serialNumber;
@property long long evaluationMode;
@property long long mediaComponentType;
@property long long auxiliaryImageType;
@property CDStruct_1b6d18a9 time;
@property long long sampleMode;
@property CDStruct_912cb5d2 scale;
@property long long roundingPolicy;
@property (copy, nonatomic) NSArray *pipelineFilters;
@property (copy, nonatomic) NSDictionary *videoFrames;
@property (readonly) NURenderTagGroup *rootGroup;
@property (readonly) NURenderTagGroup *currentGroup;
@property (readonly) unsigned long long groupCount;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)resetRenderTagGroups;
- (id)initForCopy;
- (id)beginGroupWithName:(id)arg1 error:(out id *)arg2;
- (_Bool)endGroupWithName:(id)arg1 error:(out id *)arg2;
- (_Bool)applyPipelineSettings:(id)arg1 error:(out id *)arg2;
- (id)pipelineSettingsFromSourceSettings:(id)arg1;

@end
