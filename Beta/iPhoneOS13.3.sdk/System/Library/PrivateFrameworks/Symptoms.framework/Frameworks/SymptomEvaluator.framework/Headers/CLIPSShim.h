/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

#import <Foundation/NSObject.h>

@interface CLIPSShim : NSObject

+ (id)sharedInstance;
+ (struct _CCCryptor *)cryptor;
+ (id)dataSectionNameForModule:(id)arg1;
+ (id)decodeAndInflateCLIPSString:(id)arg1;
+ (id)decryptCLIPSData:(id)arg1 forModule:(id)arg2;
+ (id)createDecryptedCLPData:(const void *)arg1 length:(unsigned long long)arg2;

@end
