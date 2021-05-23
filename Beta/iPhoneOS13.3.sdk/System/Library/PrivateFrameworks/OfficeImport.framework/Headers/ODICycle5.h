/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/ODICycle.h>

__attribute__((visibility("hidden")))
@interface ODICycle5 : ODICycle

+ (float)normalizedAngle:(float)arg1;
+ (_Bool)map1NodeWithState:(id)arg1;
+ (_Bool)map2NodeWithState:(id)arg1;
+ (struct CGRect)mapGSpaceWithState:(id)arg1;
+ (void)mapNode:(id)arg1 index:(unsigned int)arg2 state:(id)arg3;
+ (void)mapTransition:(id)arg1 index:(unsigned int)arg2 state:(id)arg3;
+ (struct CGSize)nodeSizeWithState:(id)arg1;
+ (void)addShapeForNode:(id)arg1 relativeBounds:(struct CGRect)arg2 state:(id)arg3;
+ (void)mapStyleForTransition:(id)arg1 shape:(id)arg2 state:(id)arg3;
+ (float)intersectionAngleNextToAngle:(float)arg1 isAfter:(_Bool)arg2 state:(id)arg3;
+ (void)addShapeForTransition:(id)arg1 startAngle:(float)arg2 endAngle:(float)arg3 state:(id)arg4;

@end
