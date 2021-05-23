/*
 Image: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
 */

#import <Foundation/NSObject.h>

#import <NewsUI/Swift-Protocol.h>

@class NUVideoViewControllerAdConfiguration;

@interface NUVideoViewControllerConfiguration : NSObject <Swift>

{
    _Bool _preferredMuteState;
    _Bool _pagingAllowed;
    _Bool _sharingEnabled;
    NUVideoViewControllerAdConfiguration *_adConfiguration;
}

@property (nonatomic, readonly, getter=isSharingEnabled) _Bool sharingEnabled;
@property (copy, nonatomic, readonly) NUVideoViewControllerAdConfiguration *adConfiguration;
@property (nonatomic, readonly) _Bool preferredMuteState;
@property (nonatomic, readonly, getter=isPagingAllowed) _Bool pagingAllowed;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSharingEnabled:(_Bool)arg1 preferredMuteState:(_Bool)arg2 pagingAllowed:(_Bool)arg3 adConfiguration:(id)arg4;

@end
