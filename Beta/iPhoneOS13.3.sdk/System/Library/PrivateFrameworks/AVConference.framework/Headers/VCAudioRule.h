/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCAudioRule : NSObject

{
    int _payload;
    _Bool _isSecondary;
    _Bool _sbr;
    unsigned int _samplesPerBlock;
}

@property (nonatomic, readonly) int payload;
@property (nonatomic, readonly) _Bool isSecondary;
@property (nonatomic, readonly) _Bool sbr;
@property (nonatomic, readonly) unsigned int samplesPerBlock;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithPayload:(int)arg1 isSecondary:(_Bool)arg2 sbr:(_Bool)arg3 samplesPerBlock:(unsigned int)arg4;

@end
