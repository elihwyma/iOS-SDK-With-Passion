/*
 Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

#import <Foundation/NSObject.h>

@interface RUIScriptingStaticValue : NSObject

{
    int _JSPropertyAttributes;
    const char *_identifier;
    CDUnknownFunctionPointerType _getter;
    CDUnknownFunctionPointerType _setter;
}

@property (nonatomic) const char *identifier;
@property (nonatomic) CDUnknownFunctionPointerType getter;
@property (nonatomic) CDUnknownFunctionPointerType setter;
@property (nonatomic) int JSPropertyAttributes;

- (id)description;

@end
