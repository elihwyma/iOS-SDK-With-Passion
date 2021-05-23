/*
 Image: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

#import <CryptoTokenKit/TKTLVRecord.h>

@interface TKBERTLVRecord : TKTLVRecord

+ (id)parseFromDataSource:(id)arg1;
+ (unsigned long long)encodeNumber:(unsigned long long)arg1 into:(char *)arg2;
+ (id)dataForTag:(unsigned long long)arg1;
+ (id)zuluDateFormatter;

- (id)initWithPropertyList:(id)arg1;
- (id)propertyList;
- (id)initWithTag:(unsigned long long)arg1 value:(id)arg2;
- (id)initWithTag:(unsigned long long)arg1 records:(id)arg2;

@end
