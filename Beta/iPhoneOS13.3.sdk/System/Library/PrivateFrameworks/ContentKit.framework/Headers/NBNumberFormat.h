/*
 Image: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface NBNumberFormat : NSObject

{
    _Bool _nationalPrefixOptionalWhenFormatting;
    NSString *_pattern;
    NSString *_format;
    NSMutableArray *_leadingDigitsPatterns;
    NSString *_nationalPrefixFormattingRule;
    NSString *_domesticCarrierCodeFormattingRule;
}

@property (retain, nonatomic) NSString *pattern;
@property (retain, nonatomic) NSString *format;
@property (retain, nonatomic) NSMutableArray *leadingDigitsPatterns;
@property (retain, nonatomic) NSString *nationalPrefixFormattingRule;
@property (nonatomic) _Bool nationalPrefixOptionalWhenFormatting;
@property (retain, nonatomic) NSString *domesticCarrierCodeFormattingRule;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPattern:(id)arg1 withFormat:(id)arg2 withLeadingDigitsPatterns:(id)arg3 withNationalPrefixFormattingRule:(id)arg4 whenFormatting:(_Bool)arg5 withDomesticCarrierCodeFormattingRule:(id)arg6;

@end
