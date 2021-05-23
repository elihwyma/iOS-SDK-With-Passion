/*
 Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

#import <Foundation/NSObject.h>

@class VSSpeechRequest;

__attribute__((visibility("hidden")))
@interface MNDurationRequestKey : NSObject

{
    VSSpeechRequest *_speechRequest;
}

@property (nonatomic, readonly) VSSpeechRequest *speechRequest;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSpeechRequest:(id)arg1;

@end
