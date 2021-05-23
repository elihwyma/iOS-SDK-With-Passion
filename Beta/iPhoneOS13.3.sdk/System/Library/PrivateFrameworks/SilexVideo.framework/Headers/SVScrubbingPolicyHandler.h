/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SVScrubbingPolicyHandler : NSObject

{
    unsigned long long _policy;
}

@property (nonatomic, readonly) unsigned long long policy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)scrubbingAllowedForVideo:(id)arg1;
- (id)initWithScrubbingPolicy:(unsigned long long)arg1;

@end
