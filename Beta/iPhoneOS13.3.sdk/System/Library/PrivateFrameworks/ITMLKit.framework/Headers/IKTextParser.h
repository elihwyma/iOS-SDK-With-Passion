/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class NSAttributedString, NSString;

@interface IKTextParser : NSObject

{
    NSAttributedString *_attributedString;
}

@property (retain, nonatomic, readonly) NSString *string;
@property (retain, nonatomic, readonly) NSAttributedString *attributedString;

+ (id)textWithDOMElement:(id)arg1 usingParseBlock:(CDUnknownBlockType)arg2;
+ (id)textWithAttributedString:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)attributedStringWithFont:(id)arg1 style:(id)arg2;
- (id)attributedStringWithFontHandler:(CDUnknownBlockType)arg1 style:(id)arg2;
- (id)attributedStringWithFontHandler:(CDUnknownBlockType)arg1 style:(id)arg2 defaultAttributes:(id *)arg3;
- (id)attributedStringWithFont:(id)arg1 foregroundColor:(id)arg2 textAlignment:(long long)arg3 style:(id)arg4;
- (id)attributedStringWithFontHandler:(CDUnknownBlockType)arg1 style:(id)arg2 foregroundColor:(id)arg3 textAlignment:(long long)arg4;
- (id)attributedStringWithFontHandler:(CDUnknownBlockType)arg1 style:(id)arg2 foregroundColor:(id)arg3 textAlignment:(long long)arg4 defaultAttributes:(id *)arg5;
- (id)_attributedStringFromDomElement:(id)arg1 usingParseBlock:(CDUnknownBlockType)arg2;
- (id)_attributesWithFont:(id)arg1 style:(id)arg2;
- (id)_attributedStringWithDefaultAttributes:(id)arg1 fontHandler:(CDUnknownBlockType)arg2 style:(id)arg3;
- (id)_attributesWithFont:(id)arg1 style:(id)arg2 foregroundColor:(id)arg3 textAlignment:(long long)arg4;
- (id)_stringFromDateElement:(id)arg1 unformattedString:(id)arg2;
- (id)_stringFromDurationElement:(id)arg1 unformattedString:(id)arg2;
- (id)_stringFromNumberElement:(id)arg1 unformattedString:(id)arg2;

@end
