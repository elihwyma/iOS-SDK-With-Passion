/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSString.h>

@interface NSString (HFPropertyListConverting)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)hf_formattedPersonNameForFirstName:(id)arg1 lastName:(id)arg2;

- (_Bool)hf_isEmail;
- (_Bool)hf_isPhoneNumber;
- (unsigned int)hf_UTF8Length;
- (id)hf_toHexString:(char *)arg1 length:(unsigned int)arg2;
- (id)hf_stringByTransformingFirstWordUsingBlock:(CDUnknownBlockType)arg1;
- (id)hf_SHA1;
- (id)hf_SHA256;
- (id)hf_stringByCapitalizingFirstWord;
- (id)hf_stringByLowercasingFirstWord;
- (unsigned long long)hf_countForSubstring:(id)arg1;
- (id)dynamicStringForSize:(struct CGSize)arg1 attributes:(id)arg2;
- (id)stringWithAttributes:(id)arg1;
- (_Bool)prefersDynamicString;

@end
