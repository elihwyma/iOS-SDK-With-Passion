/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <NSObject.h>

@interface TMLRuntime : NSObject

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (void)registerClass:(id)arg1;
+ (id)classForObject:(id)arg1;
+ (void)bootstrap;
+ (id)ensureClass:(id)arg1;
+ (id)classForName:(id)arg1;
+ (id)ensurePropertyWithKeyPath:(id)arg1 forObject:(id)arg2 writable:(_Bool)arg3;
+ (id)signal:(id)arg1 forObject:(id)arg2;
+ (id)requireModule:(id)arg1;
+ (Class)createClass:(id)arg1;
+ (id)createObjectWithIdentifier:(id)arg1 ofType:(id)arg2 initializer:(CDUnknownBlockType)arg3 parentObject:(id)arg4;
+ (void)makeObject:(id)arg1 implementProtocols:(id)arg2;
+ (void)registerProperty:(id)arg1 forObject:(id)arg2;
+ (void)registerSignal:(id)arg1 forObject:(id)arg2;
+ (id)propertyWithKeyPath:(id)arg1 forObject:(id)arg2;
+ (id)createObjectWithIdentifier:(id)arg1 ofType:(id)arg2 initializer:(CDUnknownBlockType)arg3;
+ (void)registerProtocol:(id)arg1;
+ (id)rootClassDescriptor;
+ (id)createObjectWithIdentifier:(id)arg1 ofClass:(id)arg2 initializer:(CDUnknownBlockType)arg3;
+ (id)childClassForName:(id)arg1 inClass:(id)arg2;
+ (id)protocolForName:(id)arg1;
+ (void)registerClass:(id)arg1 className:(id)arg2;
+ (void)verifyProperty:(id)arg1 withClass:(Class)arg2;
+ (void)registerMethod:(id)arg1 forObject:(id)arg2;
+ (void)verifyMethod:(id)arg1 forProtocol:(id)arg2;
+ (void)addProperty:(id)arg1 toClass:(Class)arg2;
+ (void)verifyMethod:(id)arg1 withClass:(Class)arg2;
+ (id)property:(id)arg1 forClass:(id)arg2;
+ (id)propertyWithKeyPath:(id)arg1 inClass:(id)arg2;
+ (id)property:(id)arg1 forObject:(id)arg2;

@end
