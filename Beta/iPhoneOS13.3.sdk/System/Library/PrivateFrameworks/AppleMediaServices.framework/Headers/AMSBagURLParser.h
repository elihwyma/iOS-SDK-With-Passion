/*
 Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface AMSBagURLParser : NSObject

+ (struct _NSRange)_rangeOfTemplateInURLString:(id)arg1;
+ (id)_firstVariableInTemplate:(id)arg1 includeTags:(_Bool)arg2;
+ (struct _NSRange)_rangeofSubstringWithOpeningTag:(id)arg1 closingTag:(id)arg2 inString:(id)arg3;
+ (id)URLBySubstitutingVariablesInURLString:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;

@end
