/*
 Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class NSMutableData;

@interface MFBase64Decoder

{
    NSMutableData *_leftovers;
    unsigned int _decodedBits;
    unsigned long long _validBytes;
    unsigned long long _equalCount;
    const char *_table;
    _Bool _bound;
}

@property (nonatomic) _Bool convertCommas;
@property (nonatomic) _Bool isBound;
@property (nonatomic, readonly) unsigned long long unconverted;

+ (_Bool)isValidBase64:(id)arg1;

- (long long)appendData:(id)arg1;
- (void)done;
- (id)initWithConsumers:(id)arg1;
- (unsigned long long)_decodeBytes:(const char *)arg1 end:(const char *)arg2 into:(char *)arg3 length:(unsigned long long)arg4 startingAt:(unsigned long long)arg5 outEncodedOffset:(unsigned long long *)arg6;

@end
