/*
 Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

#import <Foundation/NSObject.h>

@interface NTKKeylineTouchable : NSObject

{
    CDUnknownBlockType _handler;
}

+ (id)touchableWithHandler:(CDUnknownBlockType)arg1;

- (_Bool)pointInside:(struct CGPoint)arg1 keyline:(id)arg2 withEvent:(id)arg3;

@end
