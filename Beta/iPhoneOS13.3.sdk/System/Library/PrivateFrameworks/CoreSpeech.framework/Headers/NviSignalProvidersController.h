/*
 Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSHashTable, NSMapTable;

@protocol NviAssetsProvider;

@interface NviSignalProvidersController : NSObject

{
    id <NviAssetsProvider> _assetsProvider;
    NSDictionary *_dataSrcMap;
    NSMapTable *_sigProvidersMap;
    NSHashTable *_currActiveSigProvTypes;
    NSHashTable *_currActiveDataSourceTypes;
}

@property (retain, nonatomic) id <NviAssetsProvider> assetsProvider;
@property (retain, nonatomic) NSDictionary *dataSrcMap;
@property (retain, nonatomic) NSMapTable *sigProvidersMap;
@property (retain, nonatomic) NSHashTable *currActiveSigProvTypes;
@property (retain, nonatomic) NSHashTable *currActiveDataSourceTypes;

+ (void)initialize;

- (void)dealloc;
- (void)stop;
- (void)reset;
- (id)initWithAssetsProvider:(id)arg1 dataSourceMap:(id)arg2 signalProviderToDataSourceMap:(id)arg3;
- (void)registerSignalProviderDelegateForAllSignalTypes:(id)arg1;
- (void)startWithNviContext:(id)arg1;
- (void)unregisterSignalProviderDelegateForAllSignalTypes:(id)arg1;
- (_Bool)_setupSignalProviders:(id)arg1;
- (void)_startSignalProvidersWithContext:(id)arg1;
- (void)_startDataSourcesWithContext:(id)arg1;
- (void)_stopDataSources;
- (void)_stopCurrentlyRunningSignalProviders;
- (void)_iterateSignalMask:(unsigned long long)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)registerSignalProviderDelegate:(id)arg1 forSignalTypes:(unsigned long long)arg2;
- (void)unregisterSignalProviderDelegate:(id)arg1 forSignalType:(unsigned long long)arg2;

@end
