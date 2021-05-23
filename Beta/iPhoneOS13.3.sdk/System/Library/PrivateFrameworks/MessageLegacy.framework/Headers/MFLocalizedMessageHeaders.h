/*
 Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
 */

#import <MIME/MFMessageHeaders.h>

@interface MFLocalizedMessageHeaders : MFMessageHeaders

+ (id)localizedHeaders;
+ (id)localizedHeadersFromEnglishHeaders:(id)arg1;
+ (id)englishHeadersFromLocalizedHeaders:(id)arg1;

- (id)markupString;
- (id)copyFormattedHeaderValueFromAddressList:(id)arg1;
- (void)appendHeaderMarkupForKey:(id)arg1 value:(id)arg2 toString:(id)arg3;

@end
