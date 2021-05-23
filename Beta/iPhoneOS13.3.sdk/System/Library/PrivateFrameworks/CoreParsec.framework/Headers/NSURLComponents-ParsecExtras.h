/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <Foundation/NSURLComponents.h>

@interface NSURLComponents (ParsecExtras)

+ (id)parsec_componentsWithString:(id)arg1;
+ (id)parsec_componentsWithURL:(id)arg1 resolvingAgainstBaseURL:(_Bool)arg2;

- (id)parsec_normalizedURLStringWithOptions:(unsigned long long)arg1;
- (id)parsec_normalizedURLStringForTLDFeatures;
- (id)parsec_normalizedURLStringForLDAModel;
- (id)parsec_normalizedURLStringForDeepLinkIngest;
- (id)parsec_normalizedURLStringForDeepLinkWhitelist;
- (struct _NSRange)embeddedAMPURLRange;
- (id)parsec_componentsForEmbeddedAMPURLFromRange:(struct _NSRange)arg1;
- (id)parsec_componentsAfterRemovingSubdomains;

@end
