/*
 Image: /System/Library/Frameworks/Security.framework/Security
 */

#import <Security/CTKClientSEP_TKTLVRecord.h>

__attribute__((visibility("hidden")))
@interface CTKClientSEP_TKBERTLVRecord : CTKClientSEP_TKTLVRecord

+ (id)parseFromDataSource:(id)arg1;
+ (unsigned long long)encodeNumber:(unsigned long long)arg1 into:(char *)arg2;
+ (id)dataForTag:(unsigned long long)arg1;
+ (id)zuluDateFormatter;

- (id)initWithPropertyList:(id)arg1;
- (id)propertyList;
- (id)initWithTag:(unsigned long long)arg1 value:(id)arg2;
- (id)initWithTag:(unsigned long long)arg1 records:(id)arg2;

@end
