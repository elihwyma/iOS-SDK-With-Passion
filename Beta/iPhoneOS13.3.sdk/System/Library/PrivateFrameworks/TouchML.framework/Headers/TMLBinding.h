/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <NSObject.h>

@class NSMutableArray, NSString;

@interface TMLBinding : NSObject

{
    id _target;
    NSString *_keyPath;
    NSMutableArray *_binders;
    int _bindCount;
    int _flags;
    id _value;
    unsigned long long _valueType;
    _Bool _didAttachToTargetViaTMLObservable;
}

@property (nonatomic, readonly) id target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)bindingForTarget:(id)arg1 withKeyPath:(id)arg2;
+ (id)bindingForTarget:(id)arg1 withKeyPath:(id)arg2 valueType:(unsigned long long)arg3;

- (void)dealloc;
- (id)value;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (unsigned long long)valueType;
- (void)bind:(id)arg1;
- (void)unbind:(id)arg1;
- (void)unobserveTarget;
- (void)observeTarget;
- (void)tmlObserveValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithTarget:(id)arg1 keyPath:(id)arg2 valueType:(unsigned long long)arg3;

@end
