/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSString, UIFont;

@interface MKFontManager : NSObject

{
    _Bool _useSmallFont;
}

@property (nonatomic) _Bool useSmallFont;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
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

+ (id)sharedManager;
+ (void)setUseSmallFont:(_Bool)arg1;

- (id)iconFontToMatch:(id)arg1;

@end
