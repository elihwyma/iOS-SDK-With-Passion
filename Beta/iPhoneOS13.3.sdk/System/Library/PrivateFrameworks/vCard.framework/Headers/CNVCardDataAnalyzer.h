/*
 Image: /System/Library/PrivateFrameworks/vCard.framework/vCard
 */

#import <Foundation/NSObject.h>

@interface CNVCardDataAnalyzer : NSObject

+ (_Bool)tryUTF8VCard:(id)arg1 analysis:(struct CNVCardDataAnalysis *)arg2;
+ (_Bool)tryUTF16LEVCard:(id)arg1 analysis:(struct CNVCardDataAnalysis *)arg2;
+ (_Bool)tryUTF16BEVCard:(id)arg1 analysis:(struct CNVCardDataAnalysis *)arg2;
+ (_Bool)tryUTF16LEBOMVCard:(id)arg1 analysis:(struct CNVCardDataAnalysis *)arg2;
+ (_Bool)tryUTF16BEBOMVCard:(id)arg1 analysis:(struct CNVCardDataAnalysis *)arg2;
+ (_Bool)tryUTF16WithByteOrderMarker:(id)arg1 analysis:(struct CNVCardDataAnalysis *)arg2;
+ (_Bool)tryUTF16ByInferrence:(id)arg1 analysis:(struct CNVCardDataAnalysis *)arg2;
+ (_Bool)tryVCardEncoding:(unsigned long long)arg1 data:(id)arg2 analysis:(struct CNVCardDataAnalysis *)arg3;
+ (id)data:(id)arg1 byPrependingData:(id)arg2;
+ (_Bool)data:(id)arg1 isVersion30WithPrefix:(id)arg2 encoding:(unsigned long long)arg3;
+ (_Bool)data:(id)arg1 hasPrefix:(id)arg2;
+ (_Bool)data:(id)arg1 containsString:(id)arg2 encoding:(unsigned long long)arg3;
+ (_Bool)data:(id)arg1 containsParam:(id)arg2 value:(id)arg3 encoding:(unsigned long long)arg4;
+ (_Bool)data:(id)arg1 containsSubdata:(id)arg2;
+ (unsigned char)data:(id)arg1 byteAtIndex:(unsigned long long)arg2;
+ (struct CNVCardDataAnalysis)analyzeData:(id)arg1;

@end
