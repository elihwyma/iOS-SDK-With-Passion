/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface GEOPNRPhoneTrieReader : NSObject

{
    struct _CFBurstTrie *_trie;
    NSData *_phoneFile;
    unsigned char _maxPhoneNumLength;
    unsigned char _minPhoneNumLength;
}

@property (nonatomic, readonly) unsigned char minPhoneNumLength;
@property (nonatomic, readonly) unsigned char maxPhoneNumLength;

- (void)dealloc;
- (id)initWithFile:(id)arg1;
- (_Bool)lookupPhoneNumber:(id)arg1 idResult:(unsigned int *)arg2;

@end
