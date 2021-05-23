/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCRecordSource.h>

@class FCJSONRecordSourceSchema, NSISO8601DateFormatter;

@interface FCJSONRecordSource : FCRecordSource

{
    FCJSONRecordSourceSchema *_schema;
    NSISO8601DateFormatter *_dateFormatter;
}

@property (copy, nonatomic) FCJSONRecordSourceSchema *schema;
@property (copy, nonatomic) NSISO8601DateFormatter *dateFormatter;

- (id)recordType;
- (id)storeFilename;
- (int)pbRecordType;
- (id)nonLocalizableKeys;
- (id)localizableKeys;
- (unsigned long long)storeVersion;
- (unsigned long long)lowThresholdDataSizeLimit;
- (unsigned long long)highThresholdDataSizeLimit;
- (id)recordIDPrefix;
- (id)recordFromCKRecord:(id)arg1 base:(id)arg2;
- (id)keyValueRepresentationOfRecord:(id)arg1;
- (void)fetchRecordsWithIDs:(id)arg1 cachePolicy:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithSchema:(id)arg1 contentDatabase:(id)arg2 contentDirectory:(id)arg3 experimentationSuffix:(id)arg4 activeTreatmentID:(id)arg5;
- (void)fetchRecordsWithIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
