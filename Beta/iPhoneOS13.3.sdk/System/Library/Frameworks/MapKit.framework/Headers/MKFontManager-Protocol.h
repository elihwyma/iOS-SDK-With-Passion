/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <MapKit/Swift-Protocol.h>

@class UIFont;

@protocol MKFontManager <Swift>

@property (nonatomic, readonly) UIFont *largeTitleFontStatic;
@property (nonatomic, readonly) UIFont *largeTitleFont;
@property (nonatomic, readonly) UIFont *mediumTitleFont;
@property (nonatomic, readonly) UIFont *brandTitleFont;
@property (nonatomic, readonly) UIFont *subtitleFont;
@property (nonatomic, readonly) UIFont *bodyFont;
@property (nonatomic, readonly) UIFont *boldBodyFont;
@property (nonatomic, readonly) UIFont *mediumBodyFont;
@property (nonatomic, readonly) UIFont *sectionHeaderFont;
@property (nonatomic, readonly) UIFont *sectionHeaderButtonFont;
@property (nonatomic, readonly) UIFont *attributionFont;
@property (nonatomic, readonly) UIFont *smallAttributionFont;
@property (nonatomic, readonly) UIFont *rowButtonFont;
@property (nonatomic, readonly) UIFont *rowGlyphButtonFont;

- (unsigned short)iconFontToMatch: /* Error: Ran out of types for this method. */;

@end
