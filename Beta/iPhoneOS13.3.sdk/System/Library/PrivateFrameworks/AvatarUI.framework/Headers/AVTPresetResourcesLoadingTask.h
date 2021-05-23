/*
 Image: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface AVTPresetResourcesLoadingTask : NSObject

{
    _Bool canceled;
    CDUnknownBlockType _completionHandler;
    NSArray *_presetResources;
}

@property (copy, nonatomic, readonly) NSArray *presetResources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (getter=isCanceled) _Bool canceled;
@property (copy, nonatomic, readonly) CDUnknownBlockType completionHandler;

- (void)cancel;
- (id)initWithPresetResources:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
