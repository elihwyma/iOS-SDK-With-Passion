/*
 Image: /System/Library/PrivateFrameworks/SidecarCore.framework/SidecarCore
 */

#import <SidecarCore/SidecarRequest.h>

@interface SidecarResponse : SidecarRequest

{
    _Atomic _Bool _accepted;
}

- (void)accept;
- (void)_willConnect;
- (void)sendItems:(id)arg1;

@end
