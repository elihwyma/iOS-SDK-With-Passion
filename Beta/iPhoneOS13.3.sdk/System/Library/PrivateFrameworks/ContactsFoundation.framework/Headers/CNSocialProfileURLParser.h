/*
 Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

#import <Foundation/NSObject.h>

@interface CNSocialProfileURLParser : NSObject

+ (id)parseURLStringWithRegularExpressions:(id)arg1;
+ (id)parseURLStringByInference:(id)arg1;
+ (void)enumerateServiceMatchesForURLString:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (id)servicesDictionary;
+ (void)enumerateMatchesWithRegexPattern:(id)arg1 inString:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
+ (id)parseSocialProfileURL:(id)arg1;

@end
