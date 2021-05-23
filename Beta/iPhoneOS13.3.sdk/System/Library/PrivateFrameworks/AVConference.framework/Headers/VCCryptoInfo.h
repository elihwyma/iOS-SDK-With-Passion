/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCCryptoInfo : NSObject

{
    struct tagSRTPINFO _SRTPInfo;
}

@property (readonly) struct tagSRTPINFO *state;

- (void)dealloc;
- (id)initWithSRTPInfo:(struct tagSRTPINFO *)arg1;

@end
