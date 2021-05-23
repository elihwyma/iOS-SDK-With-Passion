/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class CLKImageProvider, CLKTextProvider, NSAttributedString, NSDictionary, NSMutableDictionary, NSNumber, NSString, NSTimeZone, REAccessoryDescription, REAccessoryImage, REAccessoryMatchup, REImageContentProvider, RETextContentProvider, UIColor, UIImage;

@interface REContent : NSObject

{
    NSMutableDictionary *_contents;
    NSTimeZone *_timeZone;
}

@property (retain, nonatomic) UIImage *overrideHeaderImage;
@property (retain, nonatomic) UIImage *overrideBodyImage;
@property (retain, nonatomic) NSString *bodyImageCompositingFilter;
@property (copy, nonatomic) RETextContentProvider *headerTextContentProvider;
@property (copy, nonatomic) REImageContentProvider *headerImageContentProvider;
@property (copy, nonatomic) REImageContentProvider *bodyImageContentProvider;
@property (copy, nonatomic) RETextContentProvider *description1TextContentProvider;
@property (copy, nonatomic) RETextContentProvider *description2TextContentProvider;
@property (copy, nonatomic) RETextContentProvider *description3TextContentProvider;
@property (copy, nonatomic) CLKTextProvider *headerTextProvider;
@property (copy, nonatomic) CLKImageProvider *headerImageProvider;
@property (copy, nonatomic) CLKImageProvider *bodyImageProvider;
@property (copy, nonatomic) CLKTextProvider *description1TextProvider;
@property (copy, nonatomic) CLKTextProvider *description2TextProvider;
@property (copy, nonatomic) CLKTextProvider *description3TextProvider;
@property (copy, nonatomic) NSAttributedString *headerText;
@property (copy, nonatomic) UIImage *headerImage;
@property (copy, nonatomic) UIImage *bodyImage;
@property (copy, nonatomic) NSAttributedString *description1Text;
@property (copy, nonatomic) NSAttributedString *description2Text;
@property (copy, nonatomic) NSAttributedString *description3Text;
@property (nonatomic) unsigned long long punchThrough;
@property (copy, nonatomic) UIColor *tintColor;
@property (nonatomic) unsigned long long style;
@property (nonatomic) _Bool useMonospaceFont;
@property (nonatomic) unsigned long long headerFontStyle;
@property (nonatomic) unsigned long long description1FontStyle;
@property (nonatomic) unsigned long long description2FontStyle;
@property (nonatomic) _Bool tintColorAffectsHeader;
@property (nonatomic) _Bool bodyImageShouldStretch;
@property (nonatomic) unsigned int headerImageEdge;
@property (copy, nonatomic) REAccessoryDescription *descriptionAccessory;
@property (copy, nonatomic) REAccessoryImage *imageAccessory;
@property (copy, nonatomic) REAccessoryMatchup *matchupAccessory;
@property (nonatomic) struct CGRect imageFocusRect;
@property (copy, nonatomic) NSString *overrideBodyString;
@property (copy, nonatomic) NSNumber *description1Opacity;
@property (nonatomic, readonly) NSDictionary *loggingContentValues;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)objectForKey:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;

@end
