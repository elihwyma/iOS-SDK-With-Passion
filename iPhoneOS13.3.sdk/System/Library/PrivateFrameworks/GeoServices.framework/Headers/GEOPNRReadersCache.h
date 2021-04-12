//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

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
// - (void).cxx_destruct;
- (id)stringsReaderForCC:(id)arg1;
- (id)phoneNumReaderForCC:(id)arg1;
- (id)uncompressedFilePathForCC:(id)arg1 zippedFileExtension:(id)arg2 fileExtension:(id)arg3;
- (id)accessReader;
- (id)ccReader;
- (void)_cleanupOldCacheFiles;
- (id)init;

@end

