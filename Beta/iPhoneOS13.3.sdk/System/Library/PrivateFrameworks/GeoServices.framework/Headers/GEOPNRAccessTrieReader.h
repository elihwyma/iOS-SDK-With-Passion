/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface GEOPNRAccessTrieReader : NSObject

{
    struct _CFBurstTrie *_trie;
    NSData *_accessFile;
}

- (void)dealloc;
- (id)initWithFile:(id)arg1;
- (id)lookup:(id)arg1;

@end
