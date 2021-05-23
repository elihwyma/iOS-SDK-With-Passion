/*
 Image: /System/Library/Frameworks/CoreNFC.framework/CoreNFC
 */

#import <CoreNFC/NFCTagCommandConfiguration.h>

@class NSData;

@interface NFCISO15693CustomCommandConfiguration : NFCTagCommandConfiguration

{
    unsigned char _flags;
    unsigned long long _manufacturerCode;
    unsigned long long _customCommandCode;
    NSData *_requestParameters;
}

@property (nonatomic) unsigned char flags;
@property (nonatomic) unsigned long long manufacturerCode;
@property (nonatomic) unsigned long long customCommandCode;
@property (copy, nonatomic) NSData *requestParameters;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithManufacturerCode:(unsigned long long)arg1 customCommandCode:(unsigned long long)arg2 requestParameters:(id)arg3 maximumRetries:(unsigned long long)arg4 retryInterval:(double)arg5;
- (id)initWithManufacturerCode:(unsigned long long)arg1 customCommandCode:(unsigned long long)arg2 requestParameters:(id)arg3;
- (id)asNSDataWithError:(id *)arg1;

@end
