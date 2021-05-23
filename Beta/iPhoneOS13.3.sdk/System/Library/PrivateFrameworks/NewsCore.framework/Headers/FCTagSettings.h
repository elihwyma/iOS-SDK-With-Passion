/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class FCKeyValueStore, NSMutableDictionary;

@protocol FCTagSettingsDelegate;

@interface FCTagSettings : NSObject

{
    NSMutableDictionary *_tagSettingsEntriesByTagID;
    FCKeyValueStore *_localStore;
    id <FCTagSettingsDelegate> _delegate;
}

@property (retain, nonatomic) NSMutableDictionary *tagSettingsEntriesByTagID;
@property (retain, nonatomic) FCKeyValueStore *localStore;
@property (weak, nonatomic) id <FCTagSettingsDelegate> delegate;

+ (id)commandsToMergeLocalDataToCloud:(id)arg1;

- (void)loadLocalCachesFromStore;
- (void)setWebAccessOptInForTagID:(id)arg1 webAccessOptIn:(_Bool)arg2;
- (id)webAccessOptedInTagIDs;
- (void)setAccessTokenForTagID:(id)arg1 accessToken:(id)arg2 userInitiated:(_Bool)arg3;
- (id)accessTokenForTagID:(id)arg1;
- (id)initWithStore:(id)arg1 tagSettingsDelegate:(id)arg2;
- (void)handleSyncWithTagSettingsRecord:(id)arg1;
- (void)handleSyncWithDeletedTagSettingsRecordName:(id)arg1;
- (id)allTagSettingsRecordNames;
- (id)allTagSettingsRecords;
- (void)syncForTagID:(id)arg1;
- (void)setFontSizeForTagID:(id)arg1 fontSize:(id)arg2;
- (id)fontSizeForTagID:(id)arg1;
- (void)setContentScaleForTagID:(id)arg1 contentScale:(id)arg2;
- (id)contentScaleForTagID:(id)arg1;
- (id)authenticatedAccessTokensByTagID;

@end
