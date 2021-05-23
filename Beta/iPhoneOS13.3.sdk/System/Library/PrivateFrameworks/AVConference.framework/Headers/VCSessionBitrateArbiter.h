/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface VCSessionBitrateArbiter : NSObject

{
    unsigned int _maxBitrate2GUplink;
    unsigned int _maxBitrate2GDownlink;
    unsigned int _maxBitrate3GUplink;
    unsigned int _maxBitrate3GDownlink;
    unsigned int _maxBitrateLTEUplink;
    unsigned int _maxBitrateLTEDownlink;
    unsigned int _maxBitrateWiFiUplink;
    unsigned int _maxBitrateWiFiDownlink;
    NSDictionary *_currentSettings;
}

@property (readonly) unsigned int maxBitrate2GUplink;
@property (readonly) unsigned int maxBitrate3GUplink;
@property (readonly) unsigned int maxBitrateLTEUplink;
@property (readonly) unsigned int maxBitrateWiFiUplink;
@property (readonly) unsigned int maxBitrate2GDownlink;
@property (readonly) unsigned int maxBitrate3GDownlink;
@property (readonly) unsigned int maxBitrateLTEDownlink;
@property (readonly) unsigned int maxBitrateWiFiDownlink;

- (id)init;
- (void)dealloc;
- (void)readHardwareValues;
- (void)readStoreBagValues;
- (_Bool)rangeCheck:(unsigned int)arg1;
- (unsigned int)bitrateForStoreBagKey:(id)arg1 connectionType:(int)arg2 currentBitrate:(unsigned int)arg3;

@end
