/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@class EKEvent, NSString, UIColor, UIFont, UIImage, UITraitCollection;

@interface EKDayOccurrenceState : NSObject

{
    _Bool _isPerformingChanges;
    _Bool _didChange;
    _Bool _isProposedTime;
    _Bool _isSelected;
    _Bool _isDimmed;
    _Bool _isVibrant;
    _Bool _usesSmallText;
    EKEvent *_occurrence;
    UIColor *_displayColor;
    UITraitCollection *_traitCollection;
    long long _birthdayCount;
    double _travelTime;
    long long _colorBackgroundStyle;
    double _travelTimeHeight;
    double _visibleHeight;
    double _topYBoundaryForText;
    struct CGRect _backgroundRect;
    struct CGRect _textRect;
    struct UIEdgeInsets _padding;
}

@property (nonatomic) _Bool isSelected;
@property (nonatomic) _Bool isDimmed;
@property (nonatomic) _Bool usesSmallText;
@property (nonatomic) _Bool isVibrant;
@property (nonatomic) double travelTime;
@property (nonatomic) long long colorBackgroundStyle;
@property (retain, nonatomic) UIColor *displayColor;
@property (nonatomic) struct CGRect backgroundRect;
@property (nonatomic) struct CGRect textRect;
@property (nonatomic) struct UIEdgeInsets padding;
@property (nonatomic) double travelTimeHeight;
@property (nonatomic) double visibleHeight;
@property (nonatomic) double topYBoundaryForText;
@property (retain, nonatomic) UITraitCollection *traitCollection;
@property (nonatomic) long long birthdayCount;
@property (nonatomic, readonly) _Bool isValid;
@property (nonatomic, readonly) _Bool isTentative;
@property (nonatomic, readonly) _Bool needsReply;
@property (nonatomic, readonly) _Bool isAllDay;
@property (nonatomic, readonly) _Bool isCancelled;
@property (nonatomic, readonly) _Bool isDeclined;
@property (nonatomic, readonly) _Bool hasNewTimeProposed;
@property (nonatomic, readonly) _Bool isBirthday;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *time;
@property (nonatomic, readonly) NSString *location;
@property (nonatomic, readonly) NSString *status;
@property (nonatomic, readonly) UIColor *titleTextColor;
@property (nonatomic, readonly) UIColor *timeTextColor;
@property (nonatomic, readonly) UIColor *locationTextColor;
@property (nonatomic, readonly) UIColor *statusTextColor;
@property (nonatomic, readonly) UIColor *strikethroughColor;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) double colorBarThickness;
@property (nonatomic, readonly) struct CGSize textSpace;
@property (nonatomic, readonly) double minimumNaturalHeightAllText;
@property (nonatomic, readonly) double enoughHeightForOneLine;
@property (nonatomic, readonly) struct UIEdgeInsets languageAwareInsets;
@property (nonatomic, readonly) UIImage *birthdayIcon;
@property (nonatomic, readonly) UIFont *primaryTextFont;
@property (nonatomic, readonly) UIFont *secondaryTextFont;
@property (nonatomic, readonly) unsigned long long fontCompressionDegree;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) EKEvent *occurrence;
@property (nonatomic) _Bool isProposedTime;
@property (nonatomic) struct UIEdgeInsets margin;

+ (struct UIEdgeInsets)defaultPadding;
+ (id)locationCache;
+ (_Bool)shouldShowTimeStringForOccurrence:(id)arg1;
+ (id)languageAwareInsetsCache;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)performChangesWithState:(id)arg1;
- (void)performChangesWithItem:(id)arg1 viewContent:(id)arg2;
- (void)performChangesWithOccurrenceView:(id)arg1;
- (double)_verticalContentInset;
- (id)initWithOccurrenceView:(id)arg1;

@end
