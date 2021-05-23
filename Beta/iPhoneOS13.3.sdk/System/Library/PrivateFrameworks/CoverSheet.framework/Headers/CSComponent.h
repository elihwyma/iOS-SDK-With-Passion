/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString, UIColor, UIView, _UILegibilitySettings;

@interface CSComponent : NSObject

{
    _Bool _hidden;
    long long _type;
    unsigned long long _properties;
    NSString *_identifier;
    long long _priority;
    long long _flag;
    NSString *_string;
    UIColor *_color;
    NSNumber *_value;
    UIView *_view;
    _UILegibilitySettings *_legibilitySettings;
    double _alpha;
    struct CGPoint _offset;
}

@property (nonatomic) long long type;
@property (nonatomic) unsigned long long properties;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long priority;
@property (nonatomic, getter=isHidden) _Bool hidden;
@property (nonatomic) long long flag;
@property (nonatomic) struct CGPoint offset;
@property (copy, nonatomic) NSString *string;
@property (retain, nonatomic) UIColor *color;
@property (retain, nonatomic) NSNumber *value;
@property (retain, nonatomic) UIView *view;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic) double alpha;

+ (id)statusBar;
+ (id)pageControl;
+ (id)dateView;
+ (id)quickActions;
+ (id)pageContent;
+ (id)componentWithType:(long long)arg1;
+ (id)wallpaper;
+ (id)homeAffordance;
+ (id)footerCallToActionLabel;
+ (id)slideableContent;
+ (id)statusBarBackground;
+ (id)tinting;
+ (id)footerStatusLabel;
+ (id)proudLock;
+ (id)scalableContent;
+ (id)statusBarGradient;
+ (id)controlCenterGrabber;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)value:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)view:(id)arg1;
- (id)flag:(long long)arg1;
- (_Bool)hasValueForProperty:(unsigned long long)arg1;
- (id)string:(id)arg1;
- (id)hidden:(_Bool)arg1;
- (id)offset:(struct CGPoint)arg1;
- (id)priority:(long long)arg1;
- (id)identifier:(id)arg1;
- (void)resetProperties:(unsigned long long)arg1;
- (id)legibilitySettings:(id)arg1;
- (void)resetAllProperties;

@end
