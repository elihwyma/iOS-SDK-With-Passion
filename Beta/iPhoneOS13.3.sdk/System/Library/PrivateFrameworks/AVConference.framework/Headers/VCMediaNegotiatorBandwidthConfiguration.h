/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCMediaNegotiatorBandwidthConfiguration : NSObject

{
    int _mode;
    int _connectionType;
    unsigned int _maxBandwidth;
    _Bool _isDefaultMode;
}

@property (nonatomic) int mode;
@property (nonatomic) int connectionType;
@property (nonatomic) unsigned int maxBandwidth;
@property (nonatomic) _Bool isDefaultMode;

- (_Bool)isEqual:(id)arg1;
- (id)initWithConnectionType:(int)arg1 maxBandwidth:(unsigned int)arg2;
- (id)initWithMode:(int)arg1 connectionType:(int)arg2 maxBandwidth:(unsigned int)arg3;

@end
