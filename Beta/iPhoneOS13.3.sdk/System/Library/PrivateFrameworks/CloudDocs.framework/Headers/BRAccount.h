/*
 Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface BRAccount : NSObject

{
    NSString *_accountID;
    NSData *_perAppAccountIdentifier;
}

@property (copy, nonatomic) NSData *perAppAccountIdentifier;

+ (void)startAccountTokenChangeObserverIfNeeded;
+ (_Bool)_refreshCurrentLoggedInAccountForcingRefresh:(_Bool)arg1 error:(id *)arg2;
+ (_Bool)refreshCurrentLoggedInAccount;
+ (id)currentCachedLoggedInAccountWithError:(id *)arg1;
+ (id)currentLoggedInAccountWithError:(id *)arg1;

- (id)initWithAccountID:(id)arg1;
- (_Bool)loginWithError:(id *)arg1;
- (_Bool)logoutWithError:(id *)arg1;
- (id)containerWithPendingChanges;
- (_Bool)iCloudDesktopSettingsChangedWithAttributes:(id)arg1 error:(id *)arg2;
- (_Bool)hasOptimizeStorageWithError:(id *)arg1;
- (_Bool)setOptimizeStorageEnabled:(_Bool)arg1 error:(id *)arg2;
- (_Bool)getEvictableSpace:(id *)arg1 error:(id *)arg2;
- (void)evictOldDocumentsWithHandler:(CDUnknownBlockType)arg1;

@end
