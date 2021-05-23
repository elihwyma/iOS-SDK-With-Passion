/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UIKit/UIView.h>

@class MPAVRoute, NSMutableSet, NSString, UIColor, UIFont, UILabel;

@interface MPRouteLabel : UIView

{
    NSString *_designatedGroupLeaderName;
    NSString *_previousDesignatedGroupLeaderName;
    struct CGRect _previousBounds;
    UIFont *_previousFont;
    NSMutableSet *_previousRouteNames;
    _Bool _previousForcesUppercaseText;
    _Bool _previousDisplayAsSiriSuggestion;
    long long _previousTruncationMode;
    NSMutableSet *_routeNames;
    UILabel *_sizingLabel;
    _Bool _forcesUppercaseText;
    _Bool _displayAsSiriSuggestion;
    long long _minimumEndCharacterCount;
    NSString *_text;
    long long _truncationMode;
    MPAVRoute *_route;
    UILabel *_titleLabel;
    UIColor *_textColor;
    UIFont *_font;
    long long _textAlignment;
}

@property (nonatomic) long long minimumEndCharacterCount;
@property (copy, nonatomic, readonly) NSString *text;
@property (nonatomic) long long truncationMode;
@property (nonatomic) _Bool forcesUppercaseText;
@property (nonatomic) _Bool displayAsSiriSuggestion;
@property (retain, nonatomic) MPAVRoute *route;
@property (nonatomic, readonly) UILabel *titleLabel;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic, readonly) double _baselineOffsetFromBottom;
@property (nonatomic) long long textAlignment;
@property (nonatomic, setter=_setTextColorFollowsTintColor:) _Bool _textColorFollowsTintColor;

- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)addRouteName:(id)arg1;
- (void)_routeDidChangeNotification:(id)arg1;
- (void)addRouteNamesFromArray:(id)arg1;
- (void)removeRouteName:(id)arg1;
- (void)removeRouteNamesFromArray:(id)arg1;
- (id)_formattedRouteNameForDesignatedGroupLeaderNameText:(id)arg1 routeNamesText:(id)arg2;
- (id)_routeNamesSortedAlphanumeric:(id)arg1;
- (id)_routeNamesSortedLength:(id)arg1;
- (id)_plusSeparatedRouteNames:(id)arg1;
- (struct CGSize)_labelSizeForText:(id)arg1;
- (_Bool)_labelFitsText:(id)arg1 withSize:(struct CGSize)arg2;
- (void)_updateRouteLabel;
- (id)_truncateText:(id)arg1 by:(long long)arg2;
- (void)_updateTitleIfNeeded;
- (id)_bestStringThatFitsSize:(struct CGSize)arg1;
- (id)_marketingNames;
- (long long)_compareLength:(id)arg1 with:(id)arg2;

@end
