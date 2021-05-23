/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCRecordSource.h>

@interface FCIssueRecordSource : FCRecordSource

+ (_Bool)_useTaggedImages;
+ (id)_URLStringForCoverImageKey:(id)arg1 inRecord:(id)arg2;

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

@end
