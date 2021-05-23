/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@class NSMetadataQuery, NSMutableArray, NSMutableDictionary, NSURL;

@interface GKSavedGameManager : NSObject

{
    _Bool _ubiquityUnavailable;
    NSURL *_ubiquityURL;
    NSMetadataQuery *_query;
    NSMutableDictionary *_documents;
    long long _queryDisableCount;
    NSMutableArray *_fetchHandlers;
}

@property (retain, nonatomic) NSURL *ubiquityURL;
@property (nonatomic) _Bool ubiquityUnavailable;
@property (retain, nonatomic) NSMetadataQuery *query;
@property (retain, nonatomic) NSMutableDictionary *documents;
@property (nonatomic) long long queryDisableCount;
@property (retain, nonatomic) NSMutableArray *fetchHandlers;

+ (id)sharedManager;

- (id)init;
- (void)dealloc;
- (void)removeDocument:(id)arg1;
- (void)queryDidFinishGathering:(id)arg1;
- (void)queryDidUpdate:(id)arg1;
- (void)documentModified:(id)arg1;
- (void)documentConflictStateChanged:(id)arg1;
- (void)ubiquityAvailabilityChanged:(id)arg1;
- (void)setupUbiquity;
- (void)callFetchHandlers;
- (id)savedGameForDocuments:(id)arg1;
- (id)savedGameForDocument:(id)arg1;
- (void)disableQueryUpdates;
- (id)documentForSavedGame:(id)arg1;
- (void)enableQueryUpdates;
- (id)documentToSaveWithName:(id)arg1;
- (id)fileURLForName:(id)arg1;
- (id)errorForNoUbiquity;
- (void)addDocument:(id)arg1;
- (id)currentDocumentWithName:(id)arg1;
- (void)updateSavedGameDocumentsForQueryWithHandler:(CDUnknownBlockType)arg1;
- (id)savedGamesWithName:(id)arg1;
- (void)startSavedGameQuery;
- (void)fetchSavedGamesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadDataForSavedGame:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)saveGameData:(id)arg1 withName:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteSavedGamesWithName:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)resolveConflictingSavedGames:(id)arg1 withData:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
