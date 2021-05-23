/*
 Image: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
 */

#import <JITAppKit/MCLURLRequestRewriteRule.h>

@class NSRegularExpression, NSSet, NSString;

@interface MCLURLRewriteRule : MCLURLRequestRewriteRule

{
    NSRegularExpression *_replacePattern;
    NSString *_replaceTemplate;
    NSSet *_ignoreHosts;
}

+ (id)urlRewriteRuleFromHost:(id)arg1 toHost:(id)arg2 ignoreHosts:(id)arg3;

- (id)initWithMatchPattern:(id)arg1 replacePattern:(id)arg2 replaceTemplate:(id)arg3 ignoreHosts:(id)arg4;
- (void)rewriteURLRequest:(id)arg1;

@end
