/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface NSParagraphStyle : NSObject

{
    double _lineSpacing;
    double _paragraphSpacing;
    double _headIndent;
    double _tailIndent;
    double _firstLineHeadIndent;
    double _minimumLineHeight;
    double _maximumLineHeight;
    NSArray *_tabStops;
    struct {
        unsigned int alignment:4;
        unsigned int lineBreakMode:4;
        unsigned int tabStopsIsMutable:1;
        unsigned int isNaturalDirection:1;
        unsigned int rightToLeftDirection:1;
        unsigned int fixedMultiple:2;
        unsigned int tightensForTruncation:1;
        unsigned int refCount:18;
    } _flags;
    double _defaultTabInterval;
    id _extraData;
}

@property (nonatomic, readonly) double lineSpacing;
@property (nonatomic, readonly) double paragraphSpacing;
@property (nonatomic, readonly) long long alignment;
@property (nonatomic, readonly) double headIndent;
@property (nonatomic, readonly) double tailIndent;
@property (nonatomic, readonly) double firstLineHeadIndent;
@property (nonatomic, readonly) double minimumLineHeight;
@property (nonatomic, readonly) double maximumLineHeight;
@property (nonatomic, readonly) long long lineBreakMode;
@property (nonatomic, readonly) long long baseWritingDirection;
@property (nonatomic, readonly) double lineHeightMultiple;
@property (nonatomic, readonly) double paragraphSpacingBefore;
@property (nonatomic, readonly) float hyphenationFactor;
@property (copy, nonatomic, readonly) NSArray *tabStops;
@property (nonatomic, readonly) double defaultTabInterval;
@property (nonatomic, readonly) _Bool allowsDefaultTighteningForTruncation;

+ (void)initialize;
+ (_Bool)supportsSecureCoding;
+ (long long)defaultWritingDirectionForLanguage:(id)arg1;
+ (id)defaultParagraphStyle;
+ (long long)_defaultWritingDirection;
+ (float)_defaultHyphenationFactor;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)_lineBoundsOptions;
- (long long)compositionLanguage;
- (id)textBlocks;
- (unsigned long long)lineBreakStrategy;
- (float)tighteningFactorForTruncation;
- (id)textLists;
- (_Bool)usesDefaultHyphenation;
- (void)_allocExtraData;
- (long long)headerLevel;
- (id)_initWithParagraphStyle:(id)arg1;
- (void)_deallocExtraData;
- (_Bool)allowsHangingPunctuation;
- (_Bool)usesOpticalAlignment;
- (_Bool)_isSuitableForFastStringDrawingWithAlignment:(long long *)arg1 mirrorsTextAlignment:(_Bool)arg2 lineBreakMode:(long long *)arg3 tighteningFactorForTruncation:(double *)arg4;

@end
