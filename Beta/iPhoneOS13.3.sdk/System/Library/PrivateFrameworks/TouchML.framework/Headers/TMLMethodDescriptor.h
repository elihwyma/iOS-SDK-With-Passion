/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <NSObject.h>

@class NSArray, NSString;

@interface TMLMethodDescriptor : NSObject

{
    NSString *_methodName;
    unsigned long long _returnType;
    NSArray *_parameters;
    NSString *_methodSelector;
    _Bool _optional;
}

@property (nonatomic, readonly) NSString *methodName;
@property (nonatomic, readonly) NSArray *parameters;
@property (nonatomic, readonly) NSString *methodSelector;
@property (nonatomic, readonly) unsigned long long returnType;
@property (nonatomic, readonly, getter=isOptional) _Bool optional;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)decode:(const struct ProtobufCMessage *)arg1;
+ (id)methodSelectorForMethodName:(id)arg1 parameters:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (void)encode:(struct ProtobufCMessage *)arg1;
- (id)initWithName:(id)arg1 returnType:(unsigned long long)arg2 parameters:(id)arg3 methodSelector:(id)arg4 attributes:(id)arg5;

@end
