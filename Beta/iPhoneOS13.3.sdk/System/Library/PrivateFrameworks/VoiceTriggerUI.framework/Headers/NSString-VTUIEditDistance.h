/*
 Image: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
 */

#import <Foundation/NSString.h>

@interface NSString (VTUIEditDistance)

- (id)_stringByStrippingLeadingNoise:(id)arg1;
- (id)_stringByStrippingTrailingNoise:(id)arg1;
- (id)_firstMatchesForRegularExpression:(id)arg1;
- (id)_stringByFixingNamePattern:(id)arg1;
- (id)_stringByStrippingNoiseLeadingNoise:(id)arg1 TrailingNoise:(id)arg2;
- (_Bool)_hasSubstring:(id)arg1;
- (_Bool)_matchesRegularExpression:(id)arg1;
- (_Bool)_caseInsensitiveHasMatchInEnumeration:(id)arg1;
- (id)_firstMatchesForRegularExpressions:(id)arg1;

@end
