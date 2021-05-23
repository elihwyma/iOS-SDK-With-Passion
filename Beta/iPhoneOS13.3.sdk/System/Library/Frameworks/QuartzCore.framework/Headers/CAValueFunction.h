/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CAValueFunction : NSObject

{
    NSString *_string;
    void *_impl;
}

@property (readonly) NSString *name;

+ (_Bool)supportsSecureCoding;
+ (id)functionWithName:(id)arg1;
+ (void)CAMLParserStartElement:(id)arg1;

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)inputCount;
- (id)_initWithName:(int)arg1;
- (struct Object *)CA_copyRenderValue;
- (void)encodeWithCAMLWriter:(id)arg1;
- (unsigned long long)outputCount;
- (_Bool)apply:(const double *)arg1 result:(double *)arg2;
- (_Bool)apply:(const double *)arg1 result:(double *)arg2 parameterFunction:(CDUnknownFunctionPointerType)arg3 context:(void *)arg4;

@end
