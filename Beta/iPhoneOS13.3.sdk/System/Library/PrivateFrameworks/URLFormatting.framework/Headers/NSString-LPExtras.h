/*
 Image: /System/Library/PrivateFrameworks/URLFormatting.framework/URLFormatting
 */

#import <Foundation/NSString.h>

@interface NSString (LPExtras)

+ (void)_lp_reverseEnumerateComponents:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;

- (id)_lp_userVisibleHost;
- (_Bool)_lp_hasCaseInsensitivePrefix:(id)arg1;
- (id)_lp_hostByStrippingTopLevelDomain;
- (id)_lp_highLevelDomainFromComponents:(id)arg1 indexOfFirstHighLevelDomainComponent:(unsigned long long *)arg2 indexOfFirstTopLevelDomainComponent:(unsigned long long *)arg3;
- (id)_lp_stringForcingLeftToRightDirection;
- (unsigned long long)_lp_lengthOfDeepSubdomainsFromComponents:(id)arg1;
- (_Bool)_lp_hasCaseInsensitiveSubstring:(id)arg1 startingAt:(unsigned long long)arg2;
- (id)_lp_highLevelDomainFromHost;
- (id)_lp_simplifiedUserVisibleURLStringWithSimplifications:(unsigned long long)arg1 forDisplayOnly:(_Bool)arg2;

@end
