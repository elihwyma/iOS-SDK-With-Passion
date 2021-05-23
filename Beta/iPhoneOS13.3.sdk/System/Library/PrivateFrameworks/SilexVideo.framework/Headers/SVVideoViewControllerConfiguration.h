/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

#import <SilexVideo/Swift-Protocol.h>

@interface SVVideoViewControllerConfiguration : NSObject <Swift>

{
    _Bool _preferredMuteState;
    _Bool _pagingAllowed;
}

@property (nonatomic, readonly) _Bool preferredMuteState;
@property (nonatomic, readonly, getter=isPagingAllowed) _Bool pagingAllowed;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPreferredMuteState:(_Bool)arg1 pagingAllowed:(_Bool)arg2;

@end
