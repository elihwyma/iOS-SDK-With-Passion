/*
 Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString, TIInputMode, TILanguageModelAdaptationContext;

@protocol _ICContactFetchingDelegate;

@interface TILanguageModelLoader : NSObject

{
    NSArray *_staticResourcePaths;
    _Bool _usesLinguisticContext;
    id <_ICContactFetchingDelegate> _contactFetchingDelegate;
    TIInputMode *_inputMode;
    NSString *_dynamicResourcePath;
    NSArray *_mobileAssets;
    NSString *_clientIdentifier;
    NSString *_recipientIdentifier;
    TILanguageModelAdaptationContext *_adaptationContext;
    shared_ptr_e9f752ce _model;
}

@property (nonatomic) shared_ptr_e9f752ce model;
@property (nonatomic, readonly) TIInputMode *inputMode;
@property (nonatomic, readonly) NSArray *staticResourcePaths;
@property (nonatomic, readonly) NSString *dynamicResourcePath;
@property (nonatomic, readonly) NSArray *mobileAssets;
@property (nonatomic, readonly) _Bool usesLinguisticContext;
@property (retain, nonatomic) NSString *clientIdentifier;
@property (retain, nonatomic) NSString *recipientIdentifier;
@property (retain, nonatomic) TILanguageModelAdaptationContext *adaptationContext;
@property (nonatomic) id <_ICContactFetchingDelegate> contactFetchingDelegate;

+ (void)contactStoreDidChange:(id)arg1;
+ (void)performMaintenance;
+ (id)knownClients;
+ (void)clearDynamicLearningCaches;
+ (void)flushDynamicLearningCaches;
+ (shared_ptr_e9f752ce)modelForLocale:(id)arg1 adaptationContext:(id)arg2 staticResourcePaths:(id)arg3 dynamicResourcePath:(id)arg4;
+ (id)recipientRecords;
+ (shared_ptr_e9f752ce)stubForLocale:(id)arg1 adaptationContext:(id)arg2 staticResourcePaths:(id)arg3 dynamicResourcePath:(id)arg4;
+ (id)sharedLanguageModelLoaderForInputMode:(id)arg1 staticResourcePaths:(id)arg2 dynamicResourcePath:(id)arg3 mobileAssets:(id)arg4 usesLinguisticContext:(_Bool)arg5;
+ (void)clearDynamicResourcesAtPath:(id)arg1;
+ (void)dropResourcesExcludingInputModes:(id)arg1 flushCache:(_Bool)arg2;
+ (void)startObservingContactStore;
+ (void)setAsynchronousLoad:(_Bool)arg1;
+ (void)setOfflineTrainingEnabled:(_Bool)arg1;
+ (void)resetClientAndRecipientCache;

- (id).cxx_construct;
- (id)initWithInputMode:(id)arg1 staticResourcePaths:(id)arg2 dynamicResourcePath:(id)arg3 mobileAssets:(id)arg4 usesLinguisticContext:(_Bool)arg5;
- (void)clearDynamicLearningCaches;
- (void)flushDynamicLearningCaches;
- (void)performLearningIfNecessaryForClient:(id)arg1 withModel:(shared_ptr_e9f752ce)arg2;
- (_Bool)hasLanguageModelBundle;
- (shared_ptr_e9f752ce)newLanguageModel;
- (void)setLanguageModelClientIdentifier:(id)arg1;
- (void)findRecordsMatchingRecipient:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)lookupRecordForRecipientIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setLanguageModelRecipientIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (shared_ptr_e9f752ce)sharedLanguageModelForClient:(id)arg1 withRecipient:(id)arg2;
- (shared_ptr_e9f752ce)sharedLanguageModelForClient:(id)arg1 withRecipient:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (shared_ptr_e9f752ce)lightweightLanguageModel;
- (shared_ptr_e9f752ce)languageModelForAdaptationContext:(id)arg1;

@end
