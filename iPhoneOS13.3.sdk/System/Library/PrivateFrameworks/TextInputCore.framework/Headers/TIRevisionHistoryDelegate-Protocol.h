//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString;

@protocol TIRevisionHistoryDelegate <NSObject>
- (struct TITokenID)addWord:(NSString *)arg1 context:(const struct TITokenID )arg2 contextLength:(NSUInteger)arg3 surfaceFormPtr:(id )arg4;
- (struct TITokenID)findTokenIDForWord:(NSString *)arg1 context:(const struct TITokenID )arg2 contextLength:(NSUInteger)arg3 tokenLookupMode:(unsigned int)arg4;
- (struct TITokenID)findTokenIDForWord:(NSString *)arg1 context:(const struct TITokenID )arg2 contextLength:(NSUInteger)arg3 tokenLookupMode:(unsigned int)arg4 surfaceFormPtr:(id )arg5 hasCaseInsensitiveStaticVariant:(BOOL )arg6;
- (void)registerNegativeEvidence:(NSString *)arg1 tokenID:(struct TITokenID)arg2 context:(const struct TITokenID )arg3 contextLength:(NSUInteger)arg4 intendedTokenID:(struct TITokenID )arg5 hint:(int)arg6;
- (void)decrementLanguageModelCount:(NSString *)arg1 tokenID:(struct TITokenID)arg2 context:(const struct TITokenID )arg3 contextLength:(NSUInteger)arg4;
- (void)incrementLanguageModelCount:(NSString *)arg1 tokenID:(struct TITokenID)arg2 context:(const struct TITokenID )arg3 contextLength:(NSUInteger)arg4 saveToDifferentialPrivacy:(int)arg5;
- (void)incrementUsageTrackingKeyForAppWithIsSentence:(BOOL)arg1;
- (void)incrementUsageTrackingKey:(NSString *)arg1;
- (void)incrementUsageTrackingKeyForAutocorrectionStatistic:(NSString *)arg1 autocorrectionTypes:(unsigned int)arg2;
@end

