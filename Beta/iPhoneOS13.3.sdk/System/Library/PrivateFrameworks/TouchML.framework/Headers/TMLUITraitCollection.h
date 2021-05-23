/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <NSObject.h>

@class NSArray, NSMutableDictionary, NSMutableOrderedSet, NSString, UITraitCollection, UIView;

@interface TMLUITraitCollection : NSObject

{
    UITraitCollection *_traitCollection;
    id _subviewsValue;
    id _constraintsValue;
    NSMutableDictionary *_properties;
    NSMutableOrderedSet *_propertyKeys;
    long long _userInterfaceIdiom;
    double _displayScale;
    long long _horizontalSizeClass;
    long long _verticalSizeClass;
    long long _forceTouchCapability;
    NSString *_preferredContentSizeCategory;
    unsigned long long _specificity;
    NSArray *_preferredContentSizeCategories;
}

@property (nonatomic, readonly) UITraitCollection *traitCollection;
@property (nonatomic, readonly) unsigned long long specificity;
@property (retain, nonatomic) NSArray *preferredContentSizeCategories;
@property (nonatomic) long long userInterfaceIdiom;
@property (nonatomic) double displayScale;
@property (nonatomic) long long horizontalSizeClass;
@property (nonatomic) long long verticalSizeClass;
@property (nonatomic) long long forceTouchCapability;
@property (retain, nonatomic) NSString *preferredContentSizeCategory;
@property (copy, nonatomic) NSArray *subviews;
@property (copy, nonatomic) NSArray *constraints;
@property (nonatomic, readonly) UIView *view;

+ (id)traitEnvironment:(id)arg1 willTransitionToTraitCollection:(id)arg2 fromPreviousTraitCollection:(id)arg3;
+ (id)defaultCollection;
+ (id)currentTraitCollection:(id)arg1;

- (id)init;
- (void)tmlDispose;
- (void)setTMLValue:(id)arg1 forKeyPath:(id)arg2;
- (void)applyToTraitEnvironment:(id)arg1;

@end
