/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSPFileDataStorage.h>

@class NSURL, SFUCryptoKey;

@interface TSPTemporaryDataStorage : TSPFileDataStorage

{
    NSURL *_URL;
    SFUCryptoKey *_decryptionKey;
    _Bool _isMissingData;
}

@property (nonatomic) _Bool isMissingData;

- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (void)performIOChannelReadWithAccessor:(CDUnknownBlockType)arg1;
- (void)performReadWithAccessor:(CDUnknownBlockType)arg1;
- (id)initWithURL:(id)arg1 decryptionKey:(id)arg2;

@end
