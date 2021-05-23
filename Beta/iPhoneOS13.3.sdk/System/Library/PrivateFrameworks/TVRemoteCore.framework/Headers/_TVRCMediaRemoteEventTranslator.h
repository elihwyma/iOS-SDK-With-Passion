/*
 Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

#import <Foundation/NSObject.h>

@class _TVRCMROriginWrapper, _TVRCMRTelevisionWrapper, _TVRCMRVirtualTouchDeviceWrapper;

@interface _TVRCMediaRemoteEventTranslator : NSObject

{
    _TVRCMRTelevisionWrapper *_television;
    _TVRCMROriginWrapper *_origin;
}

@property (weak, nonatomic) _TVRCMRTelevisionWrapper *television;
@property (weak, nonatomic) _TVRCMROriginWrapper *origin;
@property (nonatomic, readonly) _TVRCMRVirtualTouchDeviceWrapper *touchDevice;

- (void)sendButtonEvent:(id)arg1;
- (_Bool)_isMediaButtonEvent:(id)arg1;
- (void)sendTouchEvent:(id)arg1 withDeviceID:(unsigned long long)arg2;
- (unsigned int)_commandForMediaButtonEvent:(id)arg1;
- (id)_commandOptionsForMediaButtonEvent:(id)arg1 command:(unsigned int)arg2;
- (struct _MRHIDButtonEvent)_createMRHIDButtonEventTemplateWithButtonType:(long long)arg1;
- (struct _MRHIDTouchEvent)_createMRHIDTouchEvent:(id)arg1;

@end
