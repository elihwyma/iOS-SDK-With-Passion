/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Photos/PHAssetCollection.h>

@class NSArray, NSData, NSDate, NSDictionary, NSString;

@interface PHSuggestion : PHAssetCollection

{
    NSData *_actionData;
    NSData *_featuresData;
    NSDate *_creationDate;
    unsigned long long _approximateCount;
    unsigned long long _approximatePhotosCount;
    unsigned long long _approximateVideosCount;
    NSArray *_assets;
    unsigned short _type;
    unsigned short _subtype;
    unsigned short _state;
    unsigned short _notificationState;
    NSDictionary *_actionProperties;
    NSDictionary *_featuresProperties;
    long long _version;
    NSDate *_activationDate;
    NSDate *_relevantUntilDate;
    NSDate *_expungeDate;
    NSString *_subtitle;
}

@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, readonly) NSDictionary *actionProperties;
@property (nonatomic, readonly) NSDictionary *featuresProperties;
@property (nonatomic, readonly) _Bool containsUnverifiedPersons;
@property (nonatomic, readonly) unsigned short type;
@property (nonatomic, readonly) unsigned short subtype;
@property (nonatomic, readonly) unsigned short state;
@property (nonatomic, readonly) unsigned short notificationState;
@property (nonatomic, readonly) long long version;
@property (nonatomic, readonly) NSDate *activationDate;
@property (nonatomic, readonly) NSDate *relevantUntilDate;
@property (nonatomic, readonly) NSDate *expungeDate;

+ (id)localIdentifierWithUUID:(id)arg1;
+ (id)managedEntityName;
+ (id)fetchType;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (id)identifierCode;
+ (_Bool)managedObjectSupportsTrashedState;
+ (_Bool)managedObjectSupportsPendingState;
+ (_Bool)managedObjectSupportsRejectedState;
+ (id)entityKeyMap;
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;
+ (double)lifetimeAfterBecomingActive;
+ (id)fetchSuggestionsWithOptions:(id)arg1;
+ (id)fetchSuggestionsWithState:(unsigned short)arg1 withOptions:(id)arg2;
+ (id)fetchSuggestionsWithState:(unsigned short)arg1 ofType:(unsigned short)arg2 withOptions:(id)arg3;
+ (id)transientSuggestionWithInfo:(id)arg1 photoLibrary:(id)arg2;
+ (id)availableSuggestionTypeInfosWithOptions:(id)arg1 photoLibrary:(id)arg2;
+ (id)suggestionInfosWithOptions:(id)arg1 photoLibrary:(id)arg2;

- (id)description;
- (id)creationDate;
- (id)localizedSubtitle;
- (id)assets;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (unsigned long long)estimatedAssetCount;
- (unsigned long long)estimatedPhotosCount;
- (id)predicateForAllMomentsFromRepresentativeAssets;
- (unsigned long long)estimatedVidoesCount;
- (id)predicateForAllAssets;

@end
