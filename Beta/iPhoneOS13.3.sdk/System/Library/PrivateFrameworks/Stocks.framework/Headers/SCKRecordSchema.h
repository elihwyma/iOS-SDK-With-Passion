/*
 Image: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface SCKRecordSchema : NSObject

{
    NSString *_recordType;
    NSArray *_fieldSchemas;
}

@property (copy, nonatomic, readonly) NSString *recordType;
@property (copy, nonatomic, readonly) NSArray *fieldNames;
@property (copy, nonatomic, readonly) NSArray *fieldSchemas;

- (_Bool)isValidRecord:(id)arg1;
- (id)initWithRecordType:(id)arg1 fieldSchemas:(id)arg2;
- (id)schemaForFieldName:(id)arg1;

@end
