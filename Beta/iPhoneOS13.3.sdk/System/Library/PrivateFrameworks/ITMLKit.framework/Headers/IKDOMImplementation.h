/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKJSObject.h>

@interface IKDOMImplementation : IKJSObject

@property (readonly, getter=synchronousMode) long long MODE_SYNCHRONOUS;
@property (readonly, getter=asynchronousMode) long long MODE_ASYNCHRONOUS;

- (id)createDocument:(id)arg1:(id)arg2;
- (id)createLSParser:(long long)arg1:(id)arg2;
- (id)createLSSerializer;
- (id)createLSInput;

@end
