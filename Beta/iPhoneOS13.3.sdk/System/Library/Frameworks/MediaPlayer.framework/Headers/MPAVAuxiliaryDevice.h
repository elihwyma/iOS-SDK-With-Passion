/*
 Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MPAVAuxiliaryDevice : NSObject

{
    _Bool _playing;
    NSString *_uniqueID;
    NSString *_productName;
    NSString *_deviceName;
    NSString *_modelIdentifier;
}

@property (nonatomic, readonly) NSString *uniqueID;
@property (nonatomic, readonly) NSString *productName;
@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) NSString *modelIdentifier;
@property (nonatomic, readonly, getter=isPlaying) _Bool playing;

+ (id)otherConnectedDevicesFromRouteDescription:(id)arg1;

- (id)initWithDictionary:(id)arg1;

@end
