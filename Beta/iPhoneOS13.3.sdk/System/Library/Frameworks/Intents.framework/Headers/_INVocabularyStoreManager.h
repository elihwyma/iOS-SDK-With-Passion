/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

@class NSBundle, NSString, _INVocabularyValidator;

@protocol OS_dispatch_queue;

@interface _INVocabularyStoreManager : NSObject

{
    NSObject<OS_dispatch_queue> *_queue;
    NSBundle *_appBundle;
    _INVocabularyValidator *_validator;
    NSString *_appBundleID;
    NSString *_baseDirectoryPath;
    NSString *_appBundlePath;
}

@property (copy, nonatomic, readonly) NSString *baseDirectoryPath;
@property (copy, nonatomic) NSString *appBundleID;
@property (copy, nonatomic) NSString *appBundlePath;

+ (id)_customVocabularyDirectory;
+ (id)appDatastoreDirectoryForAppBundleID:(id)arg1 bundlePath:(id)arg2;
+ (id)_globalClassQueue;
+ (id)_hashOfAppPath:(id)arg1;
+ (id)managerForBundleID:(id)arg1 bundlePath:(id)arg2;
+ (id)_latestVocabularyStringsAt:(id)arg1;
+ (void)enumerateVocabularyUsingBlock:(CDUnknownBlockType)arg1;
+ (id)savedCustomVocabularyOverviewDictionary;
+ (void)_iterateVocabularyWithSummary:(id)arg1 optionalBlock:(CDUnknownBlockType)arg2;
+ (void)deleteAllUserVocabularyFromAllAppsAsync;

- (id)init;
- (id)_validator;
- (id)_appBundle;
- (id)_documentWithItems:(id)arg1 forIntentSlot:(id)arg2;
- (id)_baseDirectoryPathForIntentSlot:(id)arg1;
- (id)initWithBaseDirectory:(id)arg1 appBundleID:(id)arg2 appBundlePath:(id)arg3;
- (id)deleteVocabularyStoreItemAt:(id)arg1;
- (id)deleteIntentSlot:(id)arg1;
- (id)getPathToLatestVocabulary:(id *)arg1 pathDuringReading:(id *)arg2 sentVocabulary:(id *)arg3 forIntentSlot:(id)arg4;
- (id)deleteEverything;
- (void)_writeLatestVocabularyItems:(id)arg1 forIntentSlot:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)checkIfSyncSlot:(id)arg1 isAllowedWithCompletion:(CDUnknownBlockType)arg2;
- (void)writeLatestVocabularyItems:(id)arg1 forIntentSlot:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end
