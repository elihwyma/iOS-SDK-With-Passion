/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <TextInput/TIKeyEventMap_zh_Phonetic.h>

@interface TIKeyEventMap_zh_Hant_Pinyin : TIKeyEventMap_zh_Phonetic

+ (id)sharedInstance;
+ (_Bool)supportsSecureCoding;

- (id)punctuationMap;

@end
