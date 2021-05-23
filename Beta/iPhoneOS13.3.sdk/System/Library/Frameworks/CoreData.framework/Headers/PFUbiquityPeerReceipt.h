/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <CoreData/PFUbiquitySafeSaveFile.h>

@class NSDate, PFUbiquityKnowledgeVector, PFUbiquityLocation;

__attribute__((visibility("hidden")))
@interface PFUbiquityPeerReceipt : PFUbiquitySafeSaveFile

{
    PFUbiquityKnowledgeVector *_kv;
    NSDate *_writeDate;
}

@property (nonatomic, readonly) PFUbiquityLocation *receiptFileLocation;
@property (nonatomic, readonly) PFUbiquityKnowledgeVector *kv;
@property (retain, nonatomic) NSDate *writeDate;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)initWithLocalPeerID:(id)arg1 andKnowledgeVector:(id)arg2 forPeerID:(id)arg3 storeName:(id)arg4 modelVersionHash:(id)arg5 andUbiquityRootLocation:(id)arg6;
- (id)initWithLocalPeerID:(id)arg1 andReceiptFileLocation:(id)arg2;
- (_Bool)loadFileFromLocation:(id)arg1 error:(id *)arg2;
- (_Bool)writeFileToLocation:(id)arg1 error:(id *)arg2;
- (id)initWithLocalPeerID:(id)arg1 receiptPeerID:(id)arg2 storeName:(id)arg3 modelVersionHash:(id)arg4 andUbiquityRootLocation:(id)arg5;

@end
