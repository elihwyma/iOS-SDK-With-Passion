/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <UIFoundation/NSParagraphStyle.h>

@class NSArray;

@interface NSMutableParagraphStyle : NSParagraphStyle

@property (nonatomic) double lineSpacing;
@property (nonatomic) double paragraphSpacing;
@property (nonatomic) long long alignment;
@property (nonatomic) double firstLineHeadIndent;
@property (nonatomic) double headIndent;
@property (nonatomic) double tailIndent;
@property (nonatomic) long long lineBreakMode;
@property (nonatomic) double minimumLineHeight;
@property (nonatomic) double maximumLineHeight;
@property (nonatomic) long long baseWritingDirection;
@property (nonatomic) double lineHeightMultiple;
@property (nonatomic) double paragraphSpacingBefore;
@property (nonatomic) float hyphenationFactor;
@property (copy, nonatomic) NSArray *tabStops;
@property (nonatomic) double defaultTabInterval;
@property (nonatomic) _Bool allowsDefaultTighteningForTruncation;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_setLineBoundsOptions:(unsigned long long)arg1;
- (void)setCompositionLanguage:(long long)arg1;
- (void)setLineBreakStrategy:(unsigned long long)arg1;
- (void)setUsesDefaultHyphenation:(_Bool)arg1;
- (void)setTighteningFactorForTruncation:(float)arg1;
- (void)setHeaderLevel:(long long)arg1;
- (void)setTextBlocks:(id)arg1;
- (void)setTextLists:(id)arg1;
- (void)_mutateTabStops;
- (void)setAllowsHangingPunctuation:(_Bool)arg1;
- (void)setUsesOpticalAlignment:(_Bool)arg1;
- (void)setParagraphStyle:(id)arg1;
- (void)addTabStop:(id)arg1;
- (void)removeTabStop:(id)arg1;

@end
