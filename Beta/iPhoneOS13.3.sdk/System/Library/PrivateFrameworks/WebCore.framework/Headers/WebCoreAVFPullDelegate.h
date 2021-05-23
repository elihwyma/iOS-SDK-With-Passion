/*
 Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import <NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebCoreAVFPullDelegate : NSObject

{
    WeakPtr_1a409454 m_player;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id).cxx_construct;
- (id)initWithPlayer:(WeakPtr_1a409454 *)arg1;
- (void)outputSequenceWasFlushed:(id)arg1;
- (void)outputMediaDataWillChange:(id)arg1;

@end
