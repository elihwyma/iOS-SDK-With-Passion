/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface UIDictationConnectionFilterState : NSObject

{
    struct __CFString *_transform;
    CDUnknownBlockType _pendingDictationCommand;
}

@property (nonatomic) struct __CFString *transform;
@property (copy, nonatomic) CDUnknownBlockType pendingDictationCommand;

- (void)dealloc;

@end
