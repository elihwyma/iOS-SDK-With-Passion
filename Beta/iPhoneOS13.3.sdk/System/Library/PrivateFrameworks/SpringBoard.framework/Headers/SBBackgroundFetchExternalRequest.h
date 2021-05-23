/*
 Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
 */

#import <Foundation/NSObject.h>

@class SBBackgroundFetchTask, UIFetchContentInBackgroundAction;

@interface SBBackgroundFetchExternalRequest : NSObject

{
    SBBackgroundFetchTask *_task;
    UIFetchContentInBackgroundAction *_action;
}

@property (nonatomic, readonly) UIFetchContentInBackgroundAction *action;

- (void)dealloc;
- (void)execute;
- (id)initForBundleID:(id)arg1;

@end
