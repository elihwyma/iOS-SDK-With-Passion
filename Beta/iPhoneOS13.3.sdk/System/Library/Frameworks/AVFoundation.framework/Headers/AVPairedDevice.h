/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVPairedDeviceInternal, NSString;

@interface AVPairedDevice : NSObject

{
    AVPairedDeviceInternal *_ivars;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *pairedDeviceID;
@property (nonatomic, readonly) NSString *modelID;
@property (nonatomic, readonly, getter=isPlaying) _Bool playing;
@property (nonatomic, readonly) NSString *productName;

+ (id)pairedDevicesConnectedToOutputDevice:(id)arg1;

- (void)dealloc;
- (id)ID;
- (id)initWithName:(id)arg1 ID:(id)arg2 modelID:(id)arg3 playing:(_Bool)arg4 productName:(id)arg5;

@end
