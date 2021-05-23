/*
 Image: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface AVTStickerMorpherOverride : NSObject

{
    float _value;
    NSString *_geometry;
    NSString *_morpher;
}

@property (copy, nonatomic, readonly) NSString *geometry;
@property (copy, nonatomic, readonly) NSString *morpher;
@property (nonatomic, readonly) float value;

+ (id)morpherOverrideFromDictionary:(id)arg1;

- (void)applyToAvatar:(id)arg1;
- (id)overridenMorpherForAvatar:(id)arg1;
- (id)initWithGeometry:(id)arg1 morpher:(id)arg2 value:(float)arg3;

@end
