/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class FCAsyncOnceOperation, FCFlintResourceManager, NSString, SXJSONDictionary;

@protocol FCNewsAppConfigurationManager;

@interface NUANFEmbedConfigurationLoader : NSObject

{
    SXJSONDictionary *_embedConfiguration;
    id <FCNewsAppConfigurationManager> _appConfigurationManager;
    FCFlintResourceManager *_flintResourceManager;
    FCAsyncOnceOperation *_asyncOnceOperation;
}

@property (retain, nonatomic) id <FCNewsAppConfigurationManager> appConfigurationManager;
@property (retain, nonatomic) FCFlintResourceManager *flintResourceManager;
@property (retain, nonatomic) FCAsyncOnceOperation *asyncOnceOperation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) SXJSONDictionary *embedConfiguration;

- (id)loadEmbededConfigurationWithCompletion:(CDUnknownBlockType)arg1;
- (id)asyncLoadEmbedConfigurationOnceWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithAppConfigManager:(id)arg1 flintResourceManager:(id)arg2;

@end
