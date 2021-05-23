/*
 Image: /System/Library/PrivateFrameworks/HardwareSupport.framework/HardwareSupport
 */

#import <NSObject.h>

@class NSString;

@interface HSCMBaseObject : NSObject

{
    struct OpaqueCMBaseObject *_underlyingObject;
}

@property (nonatomic, readonly) struct OpaqueCMBaseObject *underlyingObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)statusDescription:(int)arg1;

- (id)valueForProperty:(struct __CFString *)arg1 error:(id *)arg2;
- (_Bool)setValue:(id)arg1 forProperty:(struct __CFString *)arg2 error:(id *)arg3;
- (id)initWithBaseObject:(struct OpaqueCMBaseObject *)arg1;

@end
