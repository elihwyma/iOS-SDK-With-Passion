/*
 Image: /System/Library/PrivateFrameworks/vCard.framework/vCard
 */

#import <Foundation/NSObject.h>

@interface CNVCardParameterEncoder : NSObject

+ (id)substitutions;
+ (id)encodeParameterValue:(id)arg1;
+ (id)stringByReplacingEncodableCharactersInString:(id)arg1;
+ (id)stringByEnclosingInQuotesIfNecessary:(id)arg1;
+ (_Bool)mustEncloseStringInQuotes:(id)arg1;

@end
