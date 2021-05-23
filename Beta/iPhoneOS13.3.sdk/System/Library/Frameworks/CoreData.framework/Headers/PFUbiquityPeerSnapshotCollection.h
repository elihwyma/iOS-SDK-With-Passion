/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface PFUbiquityPeerSnapshotCollection : NSObject

{
    NSMutableDictionary *_peerIDToTransactionNumberToSnapshot;
    NSMutableDictionary *_peerIDToTranasctionNumberToKnowledgeVector;
    NSMutableDictionary *_kvToSnapshot;
    NSMutableArray *_peerSnapshots;
    _Bool _needSort;
}

- (id)init;
- (void)dealloc;
- (void)addSnapshot:(id)arg1;
- (id)allPeerIDs;
- (_Bool)calculateSnapshotDiffsWithError:(id *)arg1;
- (id)snapshotForKnowledgeVector:(id)arg1;
- (id)snapshotForPeerID:(id)arg1 andTransactionNumber:(id)arg2;
- (id)knowledgeVectorsForTransactionNumber:(id)arg1 exportedByPeerWithID:(id)arg2;

@end
