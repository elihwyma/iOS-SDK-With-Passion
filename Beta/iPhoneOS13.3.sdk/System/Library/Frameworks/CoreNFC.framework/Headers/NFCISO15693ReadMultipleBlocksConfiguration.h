/*
 Image: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
 */

#import <CoreNFC/NFCTagCommandConfiguration.h>

@interface NFCISO15693ReadMultipleBlocksConfiguration : NFCTagCommandConfiguration

{
    unsigned char _flags;
    unsigned long long _chunkSize;
    struct _NSRange _range;
}

@property (nonatomic) unsigned char flags;
@property (nonatomic) struct _NSRange range;
@property (nonatomic) unsigned long long chunkSize;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRange:(struct _NSRange)arg1 chunkSize:(unsigned long long)arg2 maximumRetries:(unsigned long long)arg3 retryInterval:(double)arg4;
- (id)initWithRange:(struct _NSRange)arg1 chunkSize:(unsigned long long)arg2;
- (id)asNSDataArrayWithUID:(id)arg1 error:(id *)arg2;

@end
