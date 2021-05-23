/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <EventKitUI/Swift-Protocol.h>

@class EKEvent, UITraitCollection;

@protocol EKMutableDayOccurrenceState <Swift>

@property (retain, nonatomic) EKEvent *occurrence;
@property (nonatomic) long long birthdayCount;
@property (nonatomic) _Bool isProposedTime;
@property (nonatomic) _Bool isSelected;
@property (nonatomic) _Bool isDimmed;
@property (nonatomic) _Bool usesSmallText;
@property (nonatomic) _Bool isVibrant;
@property (nonatomic) double travelTime;
@property (nonatomic) long long colorBackgroundStyle;
@property (nonatomic) struct CGRect backgroundRect;
@property (nonatomic) struct UIEdgeInsets margin;
@property (nonatomic) double travelTimeHeight;
@property (nonatomic) double visibleHeight;
@property (nonatomic) double topYBoundaryForText;
@property (retain, nonatomic) UITraitCollection *traitCollection;

@end
