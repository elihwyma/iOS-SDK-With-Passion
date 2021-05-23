/*
 Image: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
 */

#import <Foundation/NSObject.h>

@class NSOrderedSet, NSString;

@interface CFXEffectType : NSObject

{
    int _jtEffectType;
    NSString *_identifier;
    NSString *_localizedTitle;
    NSOrderedSet *_effects;
}

@property (retain, nonatomic) NSOrderedSet *effects;
@property (nonatomic) int jtEffectType;
@property (copy, nonatomic) NSString *localizedTitle;
@property (nonatomic, readonly) NSString *identifier;

+ (void)initialize;
+ (id)effectTypeWithIdentifier:(id)arg1;
+ (id)effectTypeIdentifiers;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithIdentifier:(id)arg1;

@end
