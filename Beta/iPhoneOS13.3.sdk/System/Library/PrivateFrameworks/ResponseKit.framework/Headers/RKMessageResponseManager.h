/*
 Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

#import <Foundation/NSObject.h>

@class NSArray, RKRankLearner, RKResponseCollection;

@protocol OS_dispatch_queue;

@interface RKMessageResponseManager : NSObject

{
    RKResponseCollection *_collection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSArray *_preferredLanguages;
    RKRankLearner *_rankLearner;
}

@property (retain) RKResponseCollection *collection;
@property (retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) NSArray *preferredLanguages;
@property (retain) RKRankLearner *rankLearner;

+ (id)sharedManager;

- (id)init;
- (void)responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forContext:(id)arg3 withLanguage:(id)arg4 options:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (id)responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forContext:(id)arg3 withLanguage:(id)arg4 options:(unsigned long long)arg5;
- (void)flushDynamicData;
- (id)initWithDynamicDataURL:(id)arg1 displayStringsProvider:(id)arg2;
- (void)resetRegisteredResponses;
- (id)initWithDynamicDataURL:(id)arg1;
- (id)responsesForMessageImp:(id)arg1 maximumResponses:(unsigned long long)arg2 forRecipientID:(id)arg3 forConversationHistory:(id)arg4 forContext:(id)arg5 withLanguage:(id)arg6 options:(unsigned long long)arg7;
- (id)responsesForMessageWithLanguageDetectionImp:(id)arg1 maximumResponses:(unsigned long long)arg2 forRecipientID:(id)arg3 forConversationHistory:(id)arg4 forContext:(id)arg5 withLanguage:(id *)arg6 inputModes:(id)arg7 options:(unsigned long long)arg8;
- (_Bool)usePersonalizedRanking;
- (id)getRankLearner;
- (void)registerResponse:(id)arg1 forMessage:(id)arg2 forContext:(id)arg3 withEffectiveDate:(id)arg4 withLanguage:(id)arg5;
- (id)categoryForMessageWithoutQueue:(id)arg1 langID:(id)arg2;
- (id)initWithDynamicDataURL:(id)arg1 withBundleURL:(id)arg2;
- (id)initWithAssetPlistURL:(id)arg1;
- (void)responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 withLanguage:(id)arg4 options:(unsigned long long)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 recipientID:(id)arg3 forConversationHistory:(id)arg4 withLanguage:(id)arg5 options:(unsigned long long)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (id)responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 recipientID:(id)arg3 forConversationHistory:(id)arg4 withLanguage:(id)arg5 options:(unsigned long long)arg6;
- (void)responsesForMessageWithLanguageDetection:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 forContext:(id)arg4 withLanguage:(id *)arg5 options:(unsigned long long)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (id)responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 withLanguage:(id)arg4 options:(unsigned long long)arg5;
- (id)responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 withLanguage:(id)arg4 inputModes:(id)arg5 options:(unsigned long long)arg6;
- (id)responsesForMessageWithLanguageDetection:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 forContext:(id)arg4 withLanguage:(id *)arg5 options:(unsigned long long)arg6;
- (id)categoryForMessage:(id)arg1 langID:(id)arg2;
- (void)registerResponse:(id)arg1 forMessage:(id)arg2 forContext:(id)arg3 withLanguage:(id)arg4;
- (void)registerResponse:(id)arg1 forMessage:(id)arg2 metadata:(id)arg3 withLanguage:(id)arg4;
- (void)prunePersonalizedUserDatabase:(id)arg1;
- (_Bool)isQuestion:(id)arg1 withLanguage:(id)arg2;

@end
