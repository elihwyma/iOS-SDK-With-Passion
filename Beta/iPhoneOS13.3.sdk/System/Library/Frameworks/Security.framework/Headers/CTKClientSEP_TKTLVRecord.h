/*
 Image: /System/Library/Frameworks/Security.framework/Security
 */

#import <Foundation/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface CTKClientSEP_TKTLVRecord : NSObject

{
    unsigned long long _tag;
    NSData *_value;
    NSData *_data;
}

@property (nonatomic, readonly) unsigned long long tag;
@property (nonatomic, readonly) NSData *value;
@property (nonatomic, readonly) NSData *data;

+ (id)parseFromDataSource:(id)arg1;
+ (id)sequenceOfRecordsFromData:(id)arg1;
+ (id)recordFromData:(id)arg1;

- (id)description;
- (id)initWithTag:(unsigned long long)arg1 value:(id)arg2 data:(id)arg3;

@end
