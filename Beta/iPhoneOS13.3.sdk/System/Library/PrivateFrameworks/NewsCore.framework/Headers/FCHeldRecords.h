/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCInterestToken, NSArray, NSDictionary;

@interface FCHeldRecords : NSObject

{
    NSDictionary *_recordsByID;
    NSDictionary *_interestTokensByID;
}

@property (nonatomic, readonly) NSDictionary *recordsByID;
@property (nonatomic, readonly) NSDictionary *interestTokensByID;
@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) id onlyRecord;
@property (nonatomic, readonly) FCInterestToken *onlyInterestToken;
@property (nonatomic, readonly) NSArray *allRecordIDs;
@property (nonatomic, readonly) NSArray *allRecords;

+ (id)heldRecordsByMerging:(id)arg1 with:(id)arg2;

- (void)enumerateRecordsAndInterestTokensWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithRecordsByID:(id)arg1 interestTokensByID:(id)arg2;
- (id)transformRecordsByIDWithBlock:(CDUnknownBlockType)arg1;
- (id)heldRecordsPassingTest:(CDUnknownBlockType)arg1;
- (id)recordWithID:(id)arg1;
- (id)transformRecordsWithBlock:(CDUnknownBlockType)arg1;
- (id)interestTokenForID:(id)arg1;
- (void)enumerateRecordsAndInterestTokensInOrder:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)transformRecordsInOrder:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)heldRecordsForIDs:(id)arg1;

@end
