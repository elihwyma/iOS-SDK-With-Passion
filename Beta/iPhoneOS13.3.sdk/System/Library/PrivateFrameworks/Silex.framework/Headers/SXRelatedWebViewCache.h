/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSMapTable;

@interface SXRelatedWebViewCache : NSObject

{
    NSMapTable *_cache;
}

@property (nonatomic, readonly) NSMapTable *cache;

- (id)init;
- (id)relatedWebViewForBaseURL:(id)arg1;
- (void)storeRelatedWebView:(id)arg1 baseURL:(id)arg2;

@end
