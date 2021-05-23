/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSDRep.h>

@class NSMutableArray, NSObject, NSString;

@protocol TSDContainerInfo, TSDMutableContainerInfo;

@interface TSDContainerRep : TSDRep

{
    NSMutableArray *mChildReps;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSObject<TSDContainerInfo> *containerInfo;
@property (nonatomic, readonly) NSObject<TSDMutableContainerInfo> *mutableContainerInfo;

- (void)dealloc;
- (void)drawInContext:(struct CGContext *)arg1;
- (id)hitRep:(struct CGPoint)arg1 withGesture:(id)arg2 passingTest:(CDUnknownBlockType)arg3;
- (id)childReps;
- (void)addAdditionalChildLayersToArray:(id)arg1;
- (_Bool)canSelectChildRep:(id)arg1;
- (void)selectChildRep:(id)arg1;
- (id)childRepsForHitTesting;
- (void)setChildReps:(id)arg1;
- (void)addChildRep:(id)arg1;
- (void)insertChildRep:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertChildRep:(id)arg1 below:(id)arg2;
- (void)insertChildRep:(id)arg1 above:(id)arg2;
- (void)removeChildRep:(id)arg1;
- (void)replaceChildRep:(id)arg1 with:(id)arg2;
- (id)hitRep:(struct CGPoint)arg1;
- (_Bool)mustDrawOnMainThreadForInteractiveCanvas;
- (id)hitReps:(struct CGPoint)arg1 withSlopBlock:(CDUnknownBlockType)arg2;
- (id)hitRepChrome:(struct CGPoint)arg1;
- (_Bool)canDrawInParallel;
- (void)recursivelyPerformSelectorIfImplemented:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (void)recursivelyPerformSelector:(SEL)arg1 withObject:(id)arg2 withObject:(id)arg3;
- (id)hitRepChrome:(struct CGPoint)arg1 passingTest:(CDUnknownBlockType)arg2;
- (void)updateChildrenFromLayout;
- (void)willReplaceContentsFromRep:(id)arg1;
- (void)replaceContentsFromRep:(id)arg1;
- (id)visibleChildLayouts;

@end
