/*
 Image: /System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

#import <NSObject.h>

@interface PPUtils : NSObject

+ (void)enumerateChunksOfSize:(unsigned long long)arg1 fromArray:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
+ (_Bool)isConstrainedDevice;
+ (_Bool)isInternalDevice;
+ (id)Sha256ForData:(id)arg1 withSalt:(id)arg2;
+ (id)hexOfBytes:(const void *)arg1 size:(unsigned long long)arg2;
+ (id)hexUUID;
+ (long long)compareDouble:(double)arg1 withDouble:(double)arg2;
+ (long long)reverseCompareDouble:(double)arg1 withDouble:(double)arg2;
+ (id)formatStringArray:(id)arg1 truncatingAtLength:(unsigned long long)arg2;
+ (id)coordinatesToGeoHashWithLength:(unsigned long long)arg1 latitude:(double)arg2 longitude:(double)arg3;
+ (_Bool)yesWithProbability:(double)arg1;
+ (id)currentLocaleLanguageCode;
+ (id)reduceSpotlightDomainIdentifiers:(id)arg1;
+ (id)sqliteGlobEscape:(id)arg1;
+ (_Bool)isFirstPartyApp:(id)arg1;
+ (_Bool)localizedTimeStructForDate:(id)arg1 tm:(struct tm *)arg2;

@end
