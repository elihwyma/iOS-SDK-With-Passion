/*
 Image: /System/Library/PrivateFrameworks/AppleNeuralEngine.framework/AppleNeuralEngine
 */

#import <Foundation/NSObject.h>

@interface _ANEHashEncoding : NSObject

+ (id)hexStringFor:(id)arg1;
+ (void)copySHA256For:(id)arg1 toBuffer:(char *)arg2;
+ (unsigned int)hashFor:(id)arg1 seed:(unsigned int)arg2;

@end
