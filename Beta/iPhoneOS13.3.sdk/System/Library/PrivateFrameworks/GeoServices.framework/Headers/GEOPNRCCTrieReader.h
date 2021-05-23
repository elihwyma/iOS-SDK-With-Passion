/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface GEOPNRCCTrieReader : NSObject

{
    struct _CFBurstTrie *_trie;
    NSData *_ccFile;
}

- (void)dealloc;
- (id)initWithFile:(id)arg1;
- (id)lookupCCForPhNumber:(id)arg1;

@end
