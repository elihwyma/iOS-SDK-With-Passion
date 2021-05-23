/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <NSObject.h>

@class NSArray, NSString;

@interface TMLReactiveValue : NSObject

{
    NSArray *_bindings;
    id _targetWeak;
    id _targetUnsafe;
    NSString *_keyPath;
    unsigned long long _valueType;
}

@property (nonatomic, readonly) NSArray *bindings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) long long bindingOrder;

+ (id)valueForTarget:(id)arg1 withKeyPath:(id)arg2;
+ (void)removeReactiveValuesForTarget:(id)arg1;

- (id)value;
- (unsigned long long)valueType;
- (void)bindingValueChanged:(id)arg1;
- (void)unassign;
- (void)assignToTarget:(id)arg1 withKeyPath:(id)arg2;
- (id)initWithBindings:(id)arg1 valueType:(unsigned long long)arg2;

@end
