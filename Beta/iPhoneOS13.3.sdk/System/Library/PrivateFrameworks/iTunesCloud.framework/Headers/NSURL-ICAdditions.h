/*
 Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

#import <NSURL.h>

@interface NSURL (ICAdditions)

+ (id)ic_queryParametersDictionaryFromString:(id)arg1;

- (id)ic_URLByAppendingQueryParameters:(id)arg1;
- (id)ic_URLByAppendingQueryItems:(id)arg1;
- (id)ic_queryParametersDictionary;

@end
