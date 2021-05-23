/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCRecordSource.h>

@class NSArray;

@interface FCArticleRecordSource : FCRecordSource

{
    NSArray *_nonLocalizableKeys;
    NSArray *_localizableKeys;
}

+ (id)identifierFromCKRecord:(id)arg1;
+ (_Bool)supportsDeletions;
+ (id)canaryRecordName;
+ (id)changeTagFromCKRecord:(id)arg1;
+ (id)modificationDateFromCKRecord:(id)arg1;
+ (_Bool)useTaggedImages;

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
- (id)localizableExperimentalizableKeys;
- (id)urlStringForThumbnailKey:(id)arg1 inRecord:(id)arg2;
- (id)saveArticleRecords:(id)arg1;
- (id)initWithContentDatabase:(id)arg1 contentDirectory:(id)arg2 desiredArticleRecordFieldOptions:(unsigned long long)arg3 experimentalizableFieldsPostfix:(id)arg4 activeTreatmentID:(id)arg5;
- (id)saveFeedItemAndArticleRecords:(id)arg1;

@end
