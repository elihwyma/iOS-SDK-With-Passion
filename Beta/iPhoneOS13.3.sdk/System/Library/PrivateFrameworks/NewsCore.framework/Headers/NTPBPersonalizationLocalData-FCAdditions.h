/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <NewsTransport/NTPBPersonalizationLocalData.h>

@class CKRecord, NSDictionary;

@interface NTPBPersonalizationLocalData (FCAdditions)

@property (nonatomic, readonly) NSDictionary *openChangeGroupDeltasByFeatureKey;
@property (retain, nonatomic) CKRecord *remoteRecord;

+ (int)keyValuePairType;
+ (id)readValueFromKeyValuePair:(id)arg1;

- (void)writeToKeyValuePair:(id)arg1;

@end
