/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

@class NSString, OISFUCryptor;

@protocol SFUInputStream;

__attribute__((visibility("hidden")))
@interface OISFUCryptoInputStream : NSObject <Swift>

{
    id <SFUInputStream> mBaseStream;
    OISFUCryptor *mCryptor;
    long long mOffset;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (void)close;
- (long long)offset;
- (void)seekToOffset:(long long)arg1;
- (_Bool)canSeek;
- (unsigned long long)readToBuffer:(char *)arg1 size:(unsigned long long)arg2;
- (void)disableSystemCaching;
- (void)enableSystemCaching;
- (id)closeLocalStream;
- (id)initForDecryptionWithInputStream:(id)arg1 key:(id)arg2;

@end
