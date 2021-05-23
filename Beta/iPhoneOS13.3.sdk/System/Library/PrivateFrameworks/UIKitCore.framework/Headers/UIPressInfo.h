/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@interface UIPressInfo : NSObject

{
    _Bool _longClick;
    unsigned int _contextID;
    double _timestamp;
    long long _phase;
    long long _type;
    unsigned long long _source;
    unsigned long long _gameControllerComponent;
    double _force;
    unsigned long long _clickCount;
}

@property (nonatomic) double timestamp;
@property (nonatomic) long long phase;
@property (nonatomic) long long type;
@property (nonatomic) unsigned long long source;
@property (nonatomic) unsigned long long gameControllerComponent;
@property (nonatomic) double force;
@property (nonatomic) unsigned long long clickCount;
@property (nonatomic, getter=isLongClick) _Bool longClick;
@property (nonatomic) unsigned int contextID;

+ (id)_keyboardPressInfoForType:(long long)arg1 isKeyDown:(_Bool)arg2 timestamp:(double)arg3 contextID:(unsigned int)arg4;

- (id)init;
- (id)description;
- (id)_sourceDescription;

@end
