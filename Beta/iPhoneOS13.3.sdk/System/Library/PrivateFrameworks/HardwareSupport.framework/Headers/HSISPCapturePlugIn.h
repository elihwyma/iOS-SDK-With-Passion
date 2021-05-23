/*
 Image: /System/Library/PrivateFrameworks/HardwareSupport.framework/HardwareSupport
 */

#import <NSObject.h>

@interface HSISPCapturePlugIn : NSObject

{
    CDUnknownFunctionPointerType _createFunction;
}

+ (id)new;
+ (id)defaultPlugIn;

- (id)init;
- (id)initWithFactoryFunctionSymbol:(id)arg1 atPath:(id)arg2;
- (id)device:(id *)arg1;

@end
