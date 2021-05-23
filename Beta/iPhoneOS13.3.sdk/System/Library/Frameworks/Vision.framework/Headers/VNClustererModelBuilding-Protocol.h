/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@protocol VNClustererModelBuilding

- (unsigned short)resetModelState:error: /* Error: Ran out of types for this method. */;
- (unsigned short)saveAndReturnCurrentModelState: /* Error: Ran out of types for this method. */;
- (unsigned short)updateModelByAddingFaces:andRemovingFaces:canceller:error: /* Error: Ran out of types for this method. */;
- (unsigned short)updateModelByAddingFaces:withGroupingIdentifiers:andRemovingFaces:canceller:error: /* Error: Ran out of types for this method. */;

@end
