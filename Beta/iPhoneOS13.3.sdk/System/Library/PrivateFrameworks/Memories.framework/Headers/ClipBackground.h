/*
 Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString, PVEffect;

__attribute__((visibility("hidden")))
@interface ClipBackground : NSObject

{
    PVEffect *_effect;
    int _type;
    NSMutableDictionary *_backgroundEffectSettings;
}

@property (nonatomic) int type;
@property (retain, nonatomic) NSMutableDictionary *backgroundEffectSettings;
@property (nonatomic, readonly) NSString *effectID;
@property (nonatomic, readonly) PVEffect *backgroundEffect;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
