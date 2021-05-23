/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class VCVideoRule;

__attribute__((visibility("hidden")))
@interface VCBitrateRule : NSObject

{
    unsigned int _bitrate;
    int _connectionType;
    VCVideoRule *limitingRule;
}

@property unsigned int bitrate;
@property int connectionType;
@property (nonatomic, readonly) VCVideoRule *limitingRule;

- (void)dealloc;
- (id)description;
- (long long)compare:(id)arg1;
- (id)initWithBitrate:(unsigned int)arg1 connectionType:(int)arg2 limitingRule:(id)arg3;

@end
