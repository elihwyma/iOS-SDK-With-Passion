/*
 Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

#import <Foundation/NSObject.h>

@interface RUIScriptingStaticFunction : NSObject

{
    int _JSPropertyAttributes;
    const char *_identifier;
    CDUnknownFunctionPointerType _function;
}

@property (nonatomic) const char *identifier;
@property (nonatomic) CDUnknownFunctionPointerType function;
@property (nonatomic) int JSPropertyAttributes;

- (id)description;

@end
