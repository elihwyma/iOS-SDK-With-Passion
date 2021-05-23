/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class GEOPNRAccessTrieReader, GEOPNRCCTrieReader, NSMutableDictionary;

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface GEOPNRReadersCache : NSObject

{
    NSMutableDictionary *_phNoTries;
    NSMutableDictionary *_stringsFiles;
    GEOPNRCCTrieReader *_ccTrie;
    GEOPNRAccessTrieReader *_accessTrie;
    NSObject<OS_dispatch_queue> *_cacheQueue;
}

+ (id)sharedCache;

- (id)init;
- (id)stringsReaderForCC:(id)arg1;
- (id)phoneNumReaderForCC:(id)arg1;
- (id)accessReader;
- (id)ccReader;
- (void)_cleanupOldCacheFiles;
- (id)uncompressedFilePathForCC:(id)arg1 zippedFileExtension:(id)arg2 fileExtension:(id)arg3;

@end
