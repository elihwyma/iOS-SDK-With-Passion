/*
 Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
 */

#import <Foundation/NSObject.h>

@interface ICSearchResultRanker : NSObject

+ (unsigned long long)bucketOfTimeInterval:(double)arg1;
+ (id)initializeScoreArrayOfLength:(unsigned long long)arg1 setAllZeros:(_Bool)arg2;
+ (id)rankingRulesByMatchedField;
+ (_Bool)bitAtPosition:(long long)arg1 isTrueInValue:(unsigned long long)arg2;
+ (CDUnknownBlockType)titleOfNoteOrAttachmentMatchingRule;
+ (CDUnknownBlockType)participantNameOrEmailMatchingRule;
+ (CDUnknownBlockType)bodyOfNoteOrAttachmentMatchingRule;
+ (id)modificationDateBucketForSearchableItems:(id)arg1;
+ (id)relevanceBitFieldForSearchableItems:(id)arg1;
+ (id)rankingScoresForSearchableItems:(id)arg1 withRankingQueryBitDictionary:(id)arg2 matchedFields:(id *)arg3 isPrefixMatch:(id *)arg4;

@end
