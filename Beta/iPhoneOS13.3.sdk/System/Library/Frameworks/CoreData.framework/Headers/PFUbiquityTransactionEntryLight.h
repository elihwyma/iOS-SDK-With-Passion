/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSDate, NSNumber, NSString, PFUbiquityGlobalObjectID, PFUbiquityKnowledgeVector, PFUbiquityLocation;

__attribute__((visibility("hidden")))
@interface PFUbiquityTransactionEntryLight : NSObject

{
    PFUbiquityGlobalObjectID *_globalID;
    int _transactionType;
    NSString *_actingPeerID;
    NSString *_storeName;
    NSNumber *_transactionNumber;
    PFUbiquityLocation *_transactionLogLocation;
    PFUbiquityKnowledgeVector *_kv;
    NSDate *_transactionDate;
}

@property (retain, nonatomic) PFUbiquityGlobalObjectID *globalID;
@property (nonatomic) int transactionType;
@property (retain, nonatomic) NSString *actingPeerID;
@property (retain, nonatomic) NSString *storeName;
@property (retain, nonatomic) NSNumber *transactionNumber;
@property (retain, nonatomic) PFUbiquityLocation *transactionLogLocation;
@property (retain, nonatomic) PFUbiquityKnowledgeVector *knowledgeVector;
@property (retain, nonatomic) NSDate *transactionDate;

- (id)init;
- (void)dealloc;
- (id)description;
- (id)initWithTransactionEntry:(id)arg1 ubiquityRootLocation:(id)arg2 andGlobalIDCache:(id)arg3;

@end
