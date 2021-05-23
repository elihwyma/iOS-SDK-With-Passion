/*
 Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

#import <Foundation/NSString.h>

@interface NSString (AFSecurityDigestibleChunksProvider)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)hexStringFromData:(id)arg1;
+ (id)hexStringFromBytes:(const char *)arg1 length:(unsigned long long)arg2;

- (void)af_enumerateDigestibleChunksWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)_afpreferences_isLanguageCodePrefix;
- (id)_afpreferences_languageCodePrefix;
- (id)_af_stringByRemovingPrefixWithLength:(unsigned long long)arg1;
- (id)_af_stringByRemovingSuffix:(id)arg1;

@end
