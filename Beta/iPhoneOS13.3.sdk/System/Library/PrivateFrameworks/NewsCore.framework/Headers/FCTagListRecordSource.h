/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsCore/FCRecordSource.h>

@interface FCTagListRecordSource : FCRecordSource

- (id)recordType;
- (id)storeFilename;
- (int)pbRecordType;
- (id)nonLocalizableKeys;
- (unsigned long long)storeVersion;
- (unsigned long long)lowThresholdDataSizeLimit;
- (unsigned long long)highThresholdDataSizeLimit;
- (id)recordIDPrefix;
- (id)recordFromCKRecord:(id)arg1 base:(id)arg2;

@end
