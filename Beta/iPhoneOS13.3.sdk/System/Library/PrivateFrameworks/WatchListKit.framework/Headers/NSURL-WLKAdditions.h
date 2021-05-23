/*
 Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

#import <Foundation/NSURL.h>

@interface NSURL (WLKAdditions)

+ (id)wlk_URLWithServerConfig:(id)arg1 endpoint:(id)arg2 relativeToBaseURL:(_Bool)arg3 queryParameters:(id)arg4 suppressParameterEncoding:(_Bool)arg5;
+ (id)wlk_sortedQueryItemsFromDictionary:(id)arg1;

@end
