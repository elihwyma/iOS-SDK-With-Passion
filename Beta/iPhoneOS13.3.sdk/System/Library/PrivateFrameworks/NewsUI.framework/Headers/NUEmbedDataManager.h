/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

@class NSString, SXJSONDictionary;

@protocol NUEmbedConfigurationLoader;

@interface NUEmbedDataManager : NSObject

{
    id <NUEmbedConfigurationLoader> _embedConfigurationLoader;
    SXJSONDictionary *_embedConfiguration;
}

@property (nonatomic, readonly) id <NUEmbedConfigurationLoader> embedConfigurationLoader;
@property (retain, nonatomic) SXJSONDictionary *embedConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)loadEmbedDataWithCompletion:(CDUnknownBlockType)arg1;
- (id)embedForType:(id)arg1;
- (id)initWithEmbedConfigurationLoader:(id)arg1;

@end
