/*
 Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

#import <Foundation/NSObject.h>

@class NSString, _TVRCMRTelevisionWrapper, _TVRCMediaRemoteLegacyKeyboardImpl, _TVRCMediaRemoteRemoteTextInputKeyboardImpl;

@interface _TVRCMediaRemoteKeyboardImplManager : NSObject

{
    NSString *_version;
    _TVRCMediaRemoteLegacyKeyboardImpl *_legacyImpl;
    _TVRCMediaRemoteRemoteTextInputKeyboardImpl *_rtiImpl;
    _TVRCMRTelevisionWrapper *_television;
}

@property (retain, nonatomic) _TVRCMRTelevisionWrapper *television;

- (id)initWithTelevisionSystemVersion:(id)arg1;
- (id)keyboardImpl;

@end
