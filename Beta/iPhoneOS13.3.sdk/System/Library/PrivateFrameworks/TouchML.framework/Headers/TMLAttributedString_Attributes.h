/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <NSObject.h>

@class NSDictionary, NSMutableDictionary, NSNumber, NSParagraphStyle, NSShadow, NSString, NSTextAttachment, UIColor, UIFont;

@interface TMLAttributedString_Attributes : NSObject

{
    NSMutableDictionary *_attributes;
    _Bool _created;
    struct _NSRange _range;
}

@property (nonatomic) struct _NSRange range;
@property (copy, nonatomic) NSDictionary *attributes;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) NSParagraphStyle *paragraphStyle;
@property (retain, nonatomic) UIColor *foregroundColor;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (nonatomic) long long ligature;
@property (retain, nonatomic) NSNumber *kern;
@property (nonatomic) long long strikethroughStyle;
@property (nonatomic) long long underlineStyle;
@property (retain, nonatomic) UIColor *strokeColor;
@property (nonatomic) double strokeWidth;
@property (retain, nonatomic) NSString *textEffect;
@property (retain, nonatomic) NSTextAttachment *attachment;
@property (retain, nonatomic) UIColor *underlineColor;
@property (nonatomic) double obliqueness;
@property (nonatomic) double expansion;
@property (retain, nonatomic) id link;
@property (retain, nonatomic) NSShadow *shadow;
@property (nonatomic) double baselineOffset;
@property (nonatomic) long long superscript;
@property (nonatomic) long long verticalGlyphForm;
@property (nonatomic) _Bool accessibilitySpeechPunctuation;
@property (retain, nonatomic) NSString *accessibilitySpeechLanguage;
@property (retain, nonatomic) NSNumber *accessibilitySpeechPitch;
@property (retain, nonatomic) NSNumber *accessibilitySpeechQueueAnnouncement;
@property (retain, nonatomic) NSString *accessibilitySpeechIPANotation;
@property (retain, nonatomic) NSNumber *accessibilityTextHeadingLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)setAttribute:(id)arg1 value:(id)arg2;
- (void)tmlObjectCompleted;
- (void)setAXAttribute:(id)arg1 value:(id)arg2;

@end
