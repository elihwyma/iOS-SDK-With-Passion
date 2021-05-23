/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/Swift-Protocol.h>

@protocol NTKCollectionClient <Swift>

- (unsigned short)loadFullCollectionWithOrderedUUIDs:selectedUUID:facesByUUID:seqId:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)updateSelectedFaceUUID:seqId: /* Error: Ran out of types for this method. */;
- (unsigned short)updateOrderedFaceUUIDs:seqId: /* Error: Ran out of types for this method. */;
- (unsigned short)updateFaceForUUID:withConfiguration:seqId: /* Error: Ran out of types for this method. */;
- (unsigned short)updateFaceForUUID:withResourceDirectory:seqId:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)addFace:forUUID:seqId: /* Error: Ran out of types for this method. */;
- (unsigned short)removeFaceForUUID:seqId:completion: /* Error: Ran out of types for this method. */;
- (unsigned short)upgradeFace:forUUID:seqID: /* Error: Ran out of types for this method. */;
- (unsigned short)resetClientCollection;
- (unsigned short)flushCompleteForIdentifier: /* Error: Ran out of types for this method. */;

@end
