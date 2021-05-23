/*
 Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSMutableDictionary, NSNumber, NSString, PFUbiquityKnowledgeVector;

__attribute__((visibility("hidden")))
@interface PFUbiquityPeerSnapshot : NSObject

{
    NSDictionary *_logSnapshot;
    NSMutableDictionary *_diffFromPrevious;
    PFUbiquityKnowledgeVector *_kv;
    NSNumber *_transactionNumber;
    NSDate *_transactionDate;
    NSString *_exportingPeerID;
}

@property (nonatomic, readonly) NSDictionary *logSnapshot;
@property (nonatomic, readonly) NSDictionary *diffFromPrevious;
@property (nonatomic, readonly) PFUbiquityKnowledgeVector *knowledgeVector;
@property (nonatomic, readonly) NSNumber *transactionNumber;
@property (nonatomic, readonly) NSDate *transactionDate;
@property (nonatomic, readonly) NSString *exportingPeerID;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (long long)compare:(id)arg1;
- (id)initWithTranasctionEntry:(id)arg1 andLogSnapshot:(id)arg2;
- (id)initWithExportingPeerID:(id)arg1 logSnapshot:(id)arg2 transactionNumber:(id)arg3 transactionDate:(id)arg4 andKnowledgeVector:(id)arg5;
- (void)computeDiffToPreviousSnapshot:(id)arg1;
- (void)removeValuesChangedByPeerSnapshot:(id)arg1;

@end
