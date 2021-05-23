/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface PXAnimation : NSObject

+ (void)readCommonTimeNodeData:(struct _xmlNode *)arg1 commonTimeNodeData:(id)arg2 drawingState:(id)arg3;
+ (id)readParagraphBuild:(struct _xmlNode *)arg1;
+ (id)readOleChartBuild:(struct _xmlNode *)arg1;
+ (id)readGraphicBuild:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (void)readAnimationFromTimingXmlNode:(struct _xmlNode *)arg1 tgtAnimation:(id)arg2 drawingState:(id)arg3;
+ (void)writeAnimationFromSlideBase:(id)arg1 to:(id)arg2 state:(id)arg3;
+ (void)readTimeNodeType:(id)arg1 commonTimeNodeData:(id)arg2;
+ (void)readPresetClass:(id)arg1 commonTimeNodeData:(id)arg2;
+ (void)readRestartType:(id)arg1 commonTimeNodeData:(id)arg2;
+ (id)timeNodeFillTypeMap;
+ (_Bool)readOptionalStringAttribute:(id)arg1 fromNode:(struct _xmlNode *)arg2 attributeMap:(id)arg3 toPDDomValue:(unsigned long long *)arg4;
+ (void)readChildTimeNodeList:(struct _xmlNode *)arg1 commonTimeNodeData:(id)arg2 drawingState:(id)arg3;
+ (void)readIterate:(struct _xmlNode *)arg1 commonTimeNodeData:(id)arg2 drawingState:(id)arg3;
+ (void)readStConditionList:(struct _xmlNode *)arg1 commonTimeNodeData:(id)arg2 drawingState:(id)arg3;
+ (id)timeNodeTypeMap;
+ (id)presetClassMap;
+ (id)restartTypeMap;
+ (void)readAnimElement:(struct _xmlNode *)arg1 timeNode:(id)arg2 drawingState:(id)arg3;
+ (void)readAnimEffectElement:(struct _xmlNode *)arg1 timeNode:(id)arg2 drawingState:(id)arg3;
+ (void)readAnimMotionElement:(struct _xmlNode *)arg1 timeNode:(id)arg2 drawingState:(id)arg3;
+ (void)readAnimRotationElement:(struct _xmlNode *)arg1 timeNode:(id)arg2 drawingState:(id)arg3;
+ (void)readAnimScaleElement:(struct _xmlNode *)arg1 timeNode:(id)arg2 drawingState:(id)arg3;
+ (void)readAnimAudioElement:(struct _xmlNode *)arg1 timeNode:(id)arg2 drawingState:(id)arg3;
+ (void)readAnimVideoElement:(struct _xmlNode *)arg1 timeNode:(id)arg2 drawingState:(id)arg3;
+ (void)readAnimCmdElement:(struct _xmlNode *)arg1 timeNode:(id)arg2 drawingState:(id)arg3;
+ (void)readAnimParallelElement:(struct _xmlNode *)arg1 timeNode:(id)arg2 drawingState:(id)arg3;
+ (void)readAnimSequentialElement:(struct _xmlNode *)arg1 timeNode:(id)arg2 drawingState:(id)arg3;
+ (void)readAnimSetElement:(struct _xmlNode *)arg1 timeNode:(id)arg2 drawingState:(id)arg3;
+ (void)readCondition:(struct _xmlNode *)arg1 timeCondition:(id)arg2 drawingState:(id)arg3;
+ (void)readConditionList:(struct _xmlNode *)arg1 arrayOfConditions:(id)arg2 drawingState:(id)arg3;
+ (void)readTriggerEvent:(id)arg1 timeCondition:(id)arg2;
+ (id)newTarget:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (id)triggerEventMap;
+ (id)newShapeTarget:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (void)readChartBuildStep:(id)arg1 chartTarget:(id)arg2;
+ (void)readChartType:(id)arg1 oleChartTarget:(id)arg2;
+ (id)chartBuildStepMap;
+ (id)chartTypeMap;
+ (void)readCommonBehaviorData:(struct _xmlNode *)arg1 tgtCommonBehaviorData:(id)arg2 drawingState:(id)arg3;
+ (void)readPointFromNode:(struct _xmlNode *)arg1 tgtPoint:(struct CGPoint *)arg2;
+ (void)readCommonMediaNodeData:(struct _xmlNode *)arg1 commonMediaData:(id)arg2 drawingState:(id)arg3;
+ (id)readAnimVariant:(struct _xmlNode *)arg1 drawingState:(id)arg2;
+ (id)sequentialPreviousActionMap;
+ (id)sequentialNextActionMap;
+ (int)readChartBuildType:(id)arg1;

@end
