/*
 Image: /System/Library/PrivateFrameworks/CoverSheet.framework/CoverSheet
 */

#import <Foundation/NSObject.h>

#import <CoverSheet/Swift-Protocol.h>

@class NSMutableSet, NSSet, NSString, UIColor, _UILegibilitySettings;

@interface CSAppearance : NSObject <Swift>

{
    NSMutableSet *_components;
    _Bool _transitional;
    NSString *_identifier;
    long long _backgroundStyle;
    _UILegibilitySettings *_legibilitySettings;
    UIColor *_backgroundColor;
}

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic, getter=isTransitional) _Bool transitional;
@property (nonatomic) long long backgroundStyle;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (copy, nonatomic) NSSet *components;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *appearanceIdentifier;

+ (id)appearanceForProvider:(id)arg1;
+ (id)appearanceWithIdentifier:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1;
- (void)reset;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)addComponent:(id)arg1;
- (void)removeComponent:(id)arg1;
- (void)unionAppearance:(id)arg1;
- (id)componentForType:(long long)arg1 property:(unsigned long long)arg2;
- (id)componentForType:(long long)arg1 identifier:(id)arg2;
- (long long)flagForComponentType:(long long)arg1;
- (_Bool)isEqualToAppearance:(id)arg1;
- (void)removeAllComponentsWithIdentifier:(id)arg1;

@end
