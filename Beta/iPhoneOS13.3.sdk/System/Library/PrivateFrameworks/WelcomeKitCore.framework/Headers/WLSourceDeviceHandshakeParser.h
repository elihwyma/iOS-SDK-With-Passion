/*
 Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

#import <Foundation/NSObject.h>

@interface WLSourceDeviceHandshakeParser : NSObject

- (_Bool)parseData:(id)arg1 modifyingSourceDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_parseDeviceInfoNode:(struct _xmlNode *)arg1 modifyingSourceDevice:(id)arg2;
- (id)_parseConnectionFailureReasons:(struct _xmlNode *)arg1;

@end
