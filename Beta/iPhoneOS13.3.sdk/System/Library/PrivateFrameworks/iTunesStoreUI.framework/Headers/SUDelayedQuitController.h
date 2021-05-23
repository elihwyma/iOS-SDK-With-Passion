/*
 Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface SUDelayedQuitController : NSObject

{
    long long _delayTerminateCount;
    NSMutableArray *_longLivedViewControllers;
}

+ (id)sharedInstance;
+ (void)beginDelayingTerminate;
+ (void)endDelayingTerminate;
+ (_Bool)isDelayingTerminate;
+ (void)checkInLongLivedViewController:(id)arg1;
+ (void)checkOutLongLivedViewController:(id)arg1;
+ (_Bool)viewControllerIsLongLived:(id)arg1;
+ (id)checkedInViewControllerOfClass:(Class)arg1;

- (void)dealloc;
- (void)_checkInLongLivedViewController:(id)arg1;
- (void)_checkOutLongLivedViewController:(id)arg1;
- (_Bool)_viewControllerIsLongLived:(id)arg1;
- (id)_checkedInViewControllerOfClass:(Class)arg1;
- (_Bool)_isDelayingTerminate;
- (void)_beginDelayingTerminate;
- (void)_endDelayingTerminate;

@end
