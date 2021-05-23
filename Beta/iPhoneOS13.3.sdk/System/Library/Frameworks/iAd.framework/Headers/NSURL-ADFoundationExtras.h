/*
 Image: /System/Library/Frameworks/iAd.framework/iAd
 */

#import <NSURL.h>

@interface NSURL (ADFoundationExtras)

+ (id)proxyURLForVideoURL:(id)arg1 identifier:(id)arg2 changeScheme:(_Bool)arg3;
+ (id)queryParametersForURL:(id)arg1;
+ (id)valueForKey:(id)arg1 fromQueryItems:(id)arg2;
+ (id)removeQueryItemForKey:(id)arg1 fromURL:(id)arg2;

- (id)_iAd_URLByReplacingQueryStringWithString:(id)arg1;
- (id)_iad_URLByRemovingDuplicateSlashes;
- (_Bool)_iAd_isHttpOnly;
- (_Bool)_iAd_isHttpOrHttps;
- (id)decodePercentEscapesEncoding;

@end
