/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKJSObject.h>

@class JSManagedValue;

@interface IKJSWeakMap : IKJSObject

{
    JSManagedValue *_managedWeakMap;
}

@property (nonatomic, readonly) JSManagedValue *managedWeakMap;

- (id)initWithAppContext:(id)arg1;
- (id)_jsWeakMap;
- (void)setValue:(id)arg1 forWeakKey:(id)arg2;
- (id)valueForWeakKey:(id)arg1;
- (const struct OpaqueJSValue *)valueRefForWeakKeyRef:(struct OpaqueJSValue *)arg1;

@end
