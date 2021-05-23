/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <NanoTimeKitCompanion/Swift-Protocol.h>

@protocol NTKCollectionServer <Swift>

- (unsigned short)registerForCollectionIdentifier:deviceUUID:withSeqId: /* Error: Ran out of types for this method. */;
- (unsigned short)setSelectedFaceUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)setOrderedFaceUUIDs: /* Error: Ran out of types for this method. */;
- (unsigned short)updateFaceForUUID:withConfiguration: /* Error: Ran out of types for this method. */;
- (unsigned short)updateFaceForUUID:withResourceDirectory: /* Error: Ran out of types for this method. */;
- (unsigned short)addFace:forUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)removeFaceForUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)upgradeFace:forUUID: /* Error: Ran out of types for this method. */;
- (unsigned short)resetCollection;
- (unsigned short)flushUpdatesWithIdentifier: /* Error: Ran out of types for this method. */;

@end
