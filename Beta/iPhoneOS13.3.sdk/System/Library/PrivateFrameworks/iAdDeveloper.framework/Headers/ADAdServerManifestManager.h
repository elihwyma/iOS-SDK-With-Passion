/*
 Image: /System/Library/PrivateFrameworks/iAdDeveloper.framework/iAdDeveloper
 */

#import <NSObject.h>

@class NSMutableDictionary, NSString;

@interface ADAdServerManifestManager : NSObject

{
    NSMutableDictionary *_recordsByServerName;
    NSString *_deviceDescription;
}

@property (retain, nonatomic) NSMutableDictionary *recordsByServerName;
@property (copy, nonatomic) NSString *deviceDescription;
@property (nonatomic, readonly) _Bool updateInProgress;

+ (id)sharedManager;

- (id)init;
- (void)dealloc;
- (id)serverRecords;
- (void)setURL:(id)arg1 forTemporaryServerWithName:(id)arg2;
- (void)_setURL:(id)arg1 forServerWithName:(id)arg2 temporary:(_Bool)arg3;
- (void)_considerRefreshingServerRecord:(id)arg1;
- (void)_persistRecords;
- (id)_persistedManifestsURL;
- (void)_storeLoadedRecords:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)URLForServerWithName:(id)arg1;
- (void)setManifest:(id)arg1 forRecord:(id)arg2 URL:(id)arg3;
- (void)refreshAllRecords;
- (void)refreshRecord:(id)arg1;
- (void)_loadRecords:(CDUnknownBlockType)arg1;

@end
