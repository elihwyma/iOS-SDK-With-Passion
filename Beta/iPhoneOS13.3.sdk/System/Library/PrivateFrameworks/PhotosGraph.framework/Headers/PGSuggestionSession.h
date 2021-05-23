/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, PGManager, PGSuggestionNotificationProfile, PHPhotoLibrary;

@protocol OS_os_log;

@interface PGSuggestionSession : NSObject

{
    NSDate *_universalToday;
    unsigned char _profile;
    PGManager *_graphManager;
    NSObject<OS_os_log> *_loggingConnection;
    NSArray *_existingSuggestions;
    NSArray *_existingMemories;
    PGSuggestionNotificationProfile *_notificationProfile;
}

@property (nonatomic, readonly) unsigned char profile;
@property (nonatomic, readonly) PHPhotoLibrary *photoLibrary;
@property (nonatomic, readonly) PGManager *graphManager;
@property (nonatomic, readonly) NSObject<OS_os_log> *loggingConnection;
@property (retain, nonatomic) NSArray *existingSuggestions;
@property (retain, nonatomic) NSArray *existingMemories;
@property (nonatomic, readonly) PGSuggestionNotificationProfile *notificationProfile;
@property (nonatomic, readonly) NSArray *assetPropertySetsForCuration;

+ (id)suggestionTypesWithProfile:(unsigned char)arg1;
+ (id)availableSuggestionTypeInfosWithProfile:(unsigned char)arg1;
+ (id)suggesterClassesWithProfile:(unsigned char)arg1;

- (id)infosWithSuggestions:(id)arg1;
- (id)suggestionsWithOptions:(id)arg1 progress:(CDUnknownBlockType)arg2;
- (id)initWithProfile:(unsigned char)arg1 graphManager:(id)arg2;
- (id)uncoordinatedSuggestionsWithOptions:(id)arg1 progress:(CDUnknownBlockType)arg2;
- (id)coordinatedSuggestionsWithOptions:(id)arg1 progress:(CDUnknownBlockType)arg2;
- (unsigned long long)reasonForSuggestion:(id)arg1 collidingWithSuggestion:(id)arg2 relaxCollisionRules:(_Bool)arg3;
- (unsigned long long)singleAssetSuggestion:(id)arg1 collidesWithSuggestion:(id)arg2;
- (unsigned long long)outstanderSuggestion:(id)arg1 collidesWithSuggestion:(id)arg2 relaxCollisionRules:(_Bool)arg3;
- (_Bool)supportsRelaxedCollisionRulesForSuggester:(id)arg1;
- (id)anySuggestionCollidingWithSuggestion:(id)arg1 inSuggestions:(id)arg2 relaxCollisionRules:(_Bool)arg3 collisionReason:(unsigned long long *)arg4;
- (id)suggestionsByCollisionReasonCollidingWithSuggestion:(id)arg1 inSuggestions:(id)arg2 relaxCollisionRules:(_Bool)arg3;
- (_Bool)suggestion:(id)arg1 collidesWithMemories:(id)arg2;
- (id)electedSuggestionsFromSuggestions:(id)arg1 options:(id)arg2 progress:(CDUnknownBlockType)arg3;
- (id)bestSuggestionBetween:(id)arg1 and:(id)arg2;
- (id)suggesterClasses;
- (_Bool)suggesterClass:(Class)arg1 supportsOptions:(id)arg2;
- (id)activeSuggestersWithOptions:(id)arg1;
- (_Bool)suggestion:(id)arg1 isEqualToSuggestion:(id)arg2;
- (id)infoWithSuggestion:(id)arg1;

@end
