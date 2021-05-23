/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCRecordSource.h>

@class NSArray;

@interface FCTagRecordSource : FCRecordSource

{
    NSArray *_nonLocalizableKeys;
    unsigned long long _desiredFieldOptions;
}

@property (nonatomic) unsigned long long desiredFieldOptions;

+ (id)defaultCachePolicy;

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
- (id)initWithContentDatabase:(id)arg1 contentDirectory:(id)arg2 experimentalizableFieldsPostfix:(id)arg3 activeTreatmentID:(id)arg4;
- (id)experimentalizableKeys;
- (id)localizableLanguageSpecificKeys;
- (id)initWithContentDatabase:(id)arg1 contentDirectory:(id)arg2 desiredTagRecordFieldOptions:(unsigned long long)arg3;
- (id)saveTagRecords:(id)arg1;

@end
