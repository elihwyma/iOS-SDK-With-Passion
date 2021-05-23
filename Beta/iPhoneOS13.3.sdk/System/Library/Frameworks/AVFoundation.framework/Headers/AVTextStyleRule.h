/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVTextStyleRuleInternal, NSDictionary, NSString;

@interface AVTextStyleRule : NSObject

{
    AVTextStyleRuleInternal *_textStyleRule;
}

@property (nonatomic, readonly) NSDictionary *textMarkupAttributes;
@property (nonatomic, readonly) NSString *textSelector;

+ (id)propertyListForTextStyleRules:(id)arg1;
+ (id)textStyleRuleWithTextMarkupAttributes:(id)arg1 textSelector:(id)arg2;
+ (id)textStyleRulesFromPropertyList:(id)arg1;
+ (id)textStyleRuleWithTextMarkupAttributes:(id)arg1;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_dictionaryPlistRepresentation;
- (id)initWithTextMarkupAttributes:(id)arg1 textSelector:(id)arg2;
- (id)initWithTextMarkupAttributes:(id)arg1;

@end
