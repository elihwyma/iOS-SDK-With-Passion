/*
 Image: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface CNAutocompleteResultTokenMatcher : NSObject

{
    NSArray *_tokens;
    NSString *_countryCode;
}

+ (id)searchTokensFromString:(id)arg1;
+ (id)normalizePhoneNumber:(id)arg1 countryCode:(id)arg2;
+ (id)indexTokensFromPhoneNumber:(id)arg1;
+ (id)tokenizePhoneNumber:(id)arg1;

- (id)init;
- (id)initWithSearchString:(id)arg1;
- (CDUnknownBlockType)filterAdapter;
- (id)initWithSearchString:(id)arg1 countryCode:(id)arg2;
- (_Bool)evaluateResult:(id)arg1;
- (_Bool)evaluateSingleResult:(id)arg1;
- (_Bool)evaluateTopLevelGroupResult:(id)arg1;
- (id)nameTokensForResult:(id)arg1;
- (id)tokensForResultName:(id)arg1;
- (id)tokensForResultValue:(id)arg1;
- (id)representationsOfPhoneNumber:(id)arg1;

@end
