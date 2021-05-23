/*
 Image: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
 */

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, PGManager;

@protocol OS_os_log;

@interface PHASuggestionController : NSObject

{
    PGManager *_graphManager;
    NSObject<OS_os_log> *_loggingConnection;
    NSMutableArray *_existingSuggestions;
    NSMutableArray *_existingSharingSuggestions;
    NSArray *_existingMemories;
}

@property (nonatomic, readonly) NSArray *existingSuggestions;
@property (retain, nonatomic) NSArray *existingMemories;

+ (unsigned long long)_retirementDelayInDaysForSuggestionType:(unsigned short)arg1;
+ (id)availableSuggestionTypeInfosWithProfile:(unsigned char)arg1;

- (id)initWithGraphManager:(id)arg1;
- (void)processExistingSuggestionsWithOptions:(id)arg1;
- (_Bool)shouldRetireSuggestion:(id)arg1 atDate:(id)arg2;
- (_Bool)shouldDeleteSuggestion:(id)arg1 atDate:(id)arg2;
- (id)existingSuggestionsInSuggestions:(id)arg1 atDate:(id)arg2 processExistingSuggestions:(_Bool)arg3;
- (id)commitSuggestions:(id)arg1 options:(id)arg2;
- (id)collidableMemoriesWithReferenceDate:(id)arg1 andDelay:(double)arg2;
- (id)collidableSuggestionsWithReferenceDate:(id)arg1 andDelay:(double)arg2 sharingSuggestionsOnly:(_Bool)arg3;
- (id)generateSingleAssetSuggestionsWithOptions:(id)arg1 progress:(CDUnknownBlockType)arg2;
- (id)generateSharingSuggestionsWithOptions:(id)arg1 progress:(CDUnknownBlockType)arg2;
- (id)generateSuggestionsWithProfile:(unsigned char)arg1 options:(id)arg2 progress:(CDUnknownBlockType)arg3;
- (id)collidableSuggestionsWithOptions:(id)arg1;
- (id)suggestionInfosWithOptions:(id)arg1;
- (void)recordRetiredSuggestions:(id)arg1;
- (void)recordDeletedSuggestions:(id)arg1;
- (void)recordCreatedSuggestions:(id)arg1 duringSession:(id)arg2;

@end
