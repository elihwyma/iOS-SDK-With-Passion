/*
 Image: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
 */

#import <Foundation/NSObject.h>

#import <TSUtility/Swift-Protocol.h>

@class NSString, SFUCryptor;

@protocol SFUInputStream;

@interface SFUCryptoInputStream : NSObject <Swift>

{
    id <SFUInputStream> mBaseStream;
    SFUCryptor *mCryptor;
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
