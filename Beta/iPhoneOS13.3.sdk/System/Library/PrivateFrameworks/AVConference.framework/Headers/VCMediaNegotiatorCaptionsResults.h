/*
 Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

#import <Foundation/NSObject.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiatorCaptionsResults : NSObject

{
    _Bool _remoteCanDisplayCaptions;
    NSSet *_localLanguages;
    NSSet *_remoteLanguages;
}

@property (nonatomic) _Bool remoteCanDisplayCaptions;
@property (retain, nonatomic) NSSet *localLanguages;
@property (retain, nonatomic) NSSet *remoteLanguages;

- (void)dealloc;

@end
