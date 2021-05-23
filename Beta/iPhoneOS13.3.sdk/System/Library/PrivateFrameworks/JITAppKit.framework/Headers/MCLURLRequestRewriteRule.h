/*
 Image: /System/Library/PrivateFrameworks/JITAppKit.framework/JITAppKit
 */

#import <NSObject.h>

@class NSRegularExpression, NSString;

@interface MCLURLRequestRewriteRule : NSObject

{
    CDUnknownBlockType _block;
    float _priority;
    NSString *_name;
    NSRegularExpression *_matchPattern;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic) float priority;
@property (nonatomic, readonly) NSRegularExpression *matchPattern;

+ (id)urlRequestRewriteRuleWithMatchPattern:(id)arg1 block:(CDUnknownBlockType)arg2;

- (id)initWithMatchExpression:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)rewriteURLRequest:(id)arg1;

@end
