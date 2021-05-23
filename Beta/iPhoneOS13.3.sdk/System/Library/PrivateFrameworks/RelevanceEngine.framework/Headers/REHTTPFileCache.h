/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSCache, NSString;

@interface REHTTPFileCache : NSObject

{
    NSString *_directory;
    NSCache *_cache;
}

- (id)initWithRootDirectory:(id)arg1;
- (id)loadFileAtPath:(id)arg1;

@end
