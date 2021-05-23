/*
 Image: /System/Library/PrivateFrameworks/vCard.framework/vCard
 */

#import <Foundation/NSData.h>

@interface NSData (vCardAdditions)

+ (unsigned long long)_cn_maxDataLengthFittingInBase64EncodingLength:(unsigned long long)arg1;

- (id)_cn_encodeVCardBase64DataWithInitialLength:(unsigned long long)arg1;

@end
