/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <CoreParsec/Swift-Protocol.h>

@class NSArray, NSData, NSString;

@protocol _PARBagRequest <Swift>

@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *secretKey;
@property (copy, nonatomic) NSString *locale;
@property (copy, nonatomic) NSString *effectiveSystemLanguage;
@property (copy, nonatomic) NSArray *preferredLanguages;
@property (nonatomic) int tuscanyOption;
@property (nonatomic, readonly) NSData *jsonData;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;
- (unsigned short)addPreferredLanguages: /* Error: Ran out of types for this method. */;
- (unsigned short)clearPreferredLanguages;
- (unsigned short)preferredLanguagesCount;
- (unsigned short)preferredLanguagesAtIndex: /* Error: Ran out of types for this method. */;

@end
