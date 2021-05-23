/*
 Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

#import <Foundation/NSObject.h>

@interface RKRankLearner : NSObject

- (id)init;
- (id)getDBManager:(id)arg1;
- (id)updateFeaturesForResponse:(id)arg1 selectCounts:(id)arg2 inputMethodCounts:(id)arg3 sourceCounts:(id)arg4 currentTime:(id)arg5 languageCode:(id)arg6;
- (id)rankResponses:(id)arg1;
- (id)getDBManager:(id)arg1 withCustomPath:(id)arg2;
- (_Bool)insertRankingInfo:(id)arg1 forLanguageID:(id)arg2;
- (id)getRankedResponses:(id)arg1 forRecipientID:(id)arg2 withLanguageID:(id)arg3;
- (void)flushRankingData:(id)arg1;

@end
