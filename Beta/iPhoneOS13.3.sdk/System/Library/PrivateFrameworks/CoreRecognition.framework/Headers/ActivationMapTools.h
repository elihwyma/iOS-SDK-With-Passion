/*
 Image: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface ActivationMapTools : NSObject

+ (id)textFromActivationMap:(vector_00ef371e *)arg1 codeMap:(const int *)arg2 invert:(_Bool)arg3;
+ (id)fitSpacingModel:(id)arg1 toActivationMap:(const vector_e130d805 *)arg2 codeMap:(const int *)arg3 minWordLengthFractionForCorrelationPeak:(float)arg4 cost:(float *)arg5;
+ (_Bool)matchLabel:(int)arg1 toModelCharacter:(unsigned short)arg2;
+ (id)characterCentroidsFromActivationMap:(vector_e130d805 *)arg1 codeMap:(const int *)arg2 potentialPatterns:(id)arg3 minWordLengthFractionForCorrelationPeak:(float)arg4 bestModelIndex:(long long *)arg5;
+ (id)decodeStringWithCentroids:(id)arg1 activationMap:(const vector_e130d805 *)arg2 codeMap:(const int *)arg3 model:(id)arg4;
+ (id)characterCentroidsFromActivationMap:(const vector_e130d805 *)arg1 codeMap:(const int *)arg2 decodedSymbolIndexes:(id *)arg3;
+ (void)extractActivationSignals:(map_5c615d34 *)arg1 fromActivationMap:(const vector_e130d805 *)arg2 forModel:(id)arg3 codeMap:(const int *)arg4;
+ (int)colInImage:(struct vImage_Buffer)arg1 forPoint:(int)arg2 inActivationMapWithSize:(int)arg3;

@end
