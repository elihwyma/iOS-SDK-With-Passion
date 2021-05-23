/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol SVContentTransitionTypeProviding;

@interface SVPlaylistSkipPolicyHandler : NSObject

{
    id <SVContentTransitionTypeProviding> _contentTransitionTypeProvider;
}

@property (nonatomic, readonly) id <SVContentTransitionTypeProviding> contentTransitionTypeProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) _Bool canSkip;

- (id)initWithContentTransitionTypeProvider:(id)arg1;

@end
