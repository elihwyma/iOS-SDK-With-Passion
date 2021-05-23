/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <NSObject.h>

@class NSString;

@interface TMLJSONObserverInfo : NSObject

{
    unsigned long long _hash;
    NSString *_keyPath;
    id _targetUnsafe;
    id _target;
    CDUnknownBlockType _callback;
}

@property (copy, nonatomic, readonly) NSString *keyPath;
@property (nonatomic, readonly) id targetUnsafe;
@property (weak, nonatomic, readonly) id target;
@property (nonatomic, readonly) CDUnknownBlockType callback;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)notify:(id)arg1;
- (id)initWithObserver:(id)arg1 keyPath:(id)arg2 callback:(CDUnknownBlockType)arg3;

@end
