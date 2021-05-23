/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, _SFInjectedJavaScriptController;

@interface _SFWebClipMetadataFetcher : NSObject

{
    NSDictionary *_metaTags;
    NSArray *_linkTags;
    NSMutableArray *_metadataConsumers;
    _Bool _fetchingCompleted;
    _SFInjectedJavaScriptController *_jsController;
}

+ (id)metadataFetcherScriptSource;

- (void)_startFetchingMetadata;
- (id)_webClipLinkTagWithDictionary:(id)arg1;
- (id)initWithInjectedJavascriptController:(id)arg1;
- (void)fetchMetadataWithConsumer:(CDUnknownBlockType)arg1;

@end
