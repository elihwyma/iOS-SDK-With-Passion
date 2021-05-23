/*
 Image: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WFVolumeButtonManager : NSObject

{
    CDUnknownBlockType _pressHandler;
}

@property (copy, nonatomic) CDUnknownBlockType pressHandler;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithView:(id)arg1 pressHandler:(CDUnknownBlockType)arg2;

@end
