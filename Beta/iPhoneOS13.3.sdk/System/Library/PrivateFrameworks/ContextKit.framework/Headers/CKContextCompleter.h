/*
 Image: /System/Library/PrivateFrameworks/ContextKit.framework/ContextKit
 */

#import <Foundation/NSObject.h>

@class CKContextResponse, NSDate, NSLocale, NSMutableArray, NSString;

@interface CKContextCompleter : NSObject

{
    CKContextResponse *_response;
    NSString *_ignorePrefix;
    NSLocale *_searchLocale;
    _Atomic _Bool _discarded;
    unsigned long long _couldHaveShown;
    NSString *_input;
    NSDate *_hideCompletionsAfterDate;
    _Bool _hideZKW;
    _Bool _hideCompletions;
    unsigned long long _mustPrefixMatchLength;
    NSMutableArray *_zkwResults;
}

- (void)dealloc;
- (id)initWithResponse:(id)arg1;
- (void)discard;
- (id)_resultsMatching:(id)arg1;
- (id)resultsMatching:(id)arg1;
- (void)logResultsShown:(unsigned long long)arg1 serverOverride:(_Bool)arg2 forInput:(id)arg3;
- (void)logEngagement:(id)arg1 forInput:(id)arg2 completion:(id)arg3;
- (void)logTransactionSuccessfulForInput:(id)arg1 completion:(id)arg2;
- (id)queriesMatching:(id)arg1;
- (void)logResultsShown:(unsigned long long)arg1 serverOverride:(_Bool)arg2;
- (void)logEngagement:(id)arg1 forInput:(id)arg2;
- (void)logTransactionSuccessfulForInput:(id)arg1;

@end
