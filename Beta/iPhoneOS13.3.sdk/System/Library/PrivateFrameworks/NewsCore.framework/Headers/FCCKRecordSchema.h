/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface FCCKRecordSchema : NSObject

{
    NSDictionary *_fieldSchemasByName;
    NSString *_clientRecordType;
    NSString *_serverRecordType;
}

@property (copy, nonatomic, readonly) NSString *clientRecordType;
@property (copy, nonatomic, readonly) NSString *serverRecordType;
@property (nonatomic, readonly) _Bool hasEncryptedFields;
@property (copy, nonatomic, readonly) NSArray *allEncryptedFieldNames;
@property (copy, nonatomic, readonly) NSArray *allUnencryptedFieldNames;

+ (id)recordWithClientType:(id)arg1 serverType:(id)arg2 fields:(id)arg3;

- (id)init;
- (_Bool)isFieldKnown:(id)arg1;
- (_Bool)isFieldEncrypted:(id)arg1;
- (id)initWithClientRecordType:(id)arg1 serverRecordType:(id)arg2 fieldSchemas:(id)arg3;

@end
