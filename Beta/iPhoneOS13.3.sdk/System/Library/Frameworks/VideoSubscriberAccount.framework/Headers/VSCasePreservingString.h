/*
 Image: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
 */

#import <Foundation/NSString.h>

@interface VSCasePreservingString : NSString

{
    NSString *_underlyingString;
}

- (unsigned long long)length;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (id)lowercaseStringWithLocale:(id)arg1;
- (id)uppercaseStringWithLocale:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)lowercaseString;
- (id)uppercaseString;
- (id)capitalizedString;
- (id)capitalizedStringWithLocale:(id)arg1;
- (id)localizedUppercaseString;
- (id)localizedLowercaseString;
- (id)localizedCapitalizedString;

@end
