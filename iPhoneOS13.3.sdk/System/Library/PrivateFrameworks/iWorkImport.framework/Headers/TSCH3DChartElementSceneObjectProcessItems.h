//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSCHUnretainedParent-Protocol.h>

@class NSMutableArray, TSCH3DChartElementProperties, TSCH3DChartElementSceneObject, TSCH3DRenderProcessor, TSCH3DSceneRenderPipeline;

__attribute__((visibility("hidden")))
@interface TSCH3DChartElementSceneObjectProcessItems : NSObject <TSCHUnretainedParent>
{
    TSCH3DChartElementSceneObject *mSceneObject;
    TSCH3DSceneRenderPipeline *mPipeline;
    TSCH3DChartElementProperties *mProperties;
    NSMutableArray *mDelayedItems;
}

+ (id)processItemsWithSceneObject:(id)arg1 properties:(id)arg2 pipeline:(id)arg3;
- (void)processItems;
- (void)performItemsProcessing;
- (void)p_processElementInfoWithSeries:(id)arg1 position:(const tvec2_3b141483 )arg2;
- (void)processDelayedItemsWithOpacity:(float)arg1;
- (BOOL)p_delayedItemsAreUnique;
- (id)elementInfoWithSeries:(id)arg1 position:(const tvec2_3b141483 )arg2;
@property(readonly, nonatomic) TSCH3DRenderProcessor *processor;
@property(readonly, nonatomic) BOOL geometryOnly;
@property(readonly, nonatomic) BOOL useBoundsGeometry;
@property(readonly, nonatomic) BOOL pushStates;
- (void)clearParent;
- (void)dealloc;
- (id)initWithSceneObject:(id)arg1 properties:(id)arg2 pipeline:(id)arg3;

@end

