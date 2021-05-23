/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WKProcessAssertionBackgroundTaskManager : NSObject

{
    unsigned long long _backgroundTask;
    struct HashSet<WebKit::ProcessAndUIAssertion *, WTF::PtrHash<WebKit::ProcessAndUIAssertion *>, WTF::HashTraits<WebKit::ProcessAndUIAssertion *>> _assertionsNeedingBackgroundTask;
    _Bool _applicationIsBackgrounded;
    CDUnknownBlockType _pendingTaskReleaseTask;
}

+ (id)shared;

- (id)init;
- (void)dealloc;
- (id).cxx_construct;
- (void)_cancelPendingReleaseTask;
- (void)_updateBackgroundTask;
- (void)_releaseBackgroundTask;
- (void)_notifyAssertionsOfImminentSuspension;
- (void)_scheduleReleaseTask;
- (void)addAssertionNeedingBackgroundTask:(struct ProcessAndUIAssertion *)arg1;
- (void)removeAssertionNeedingBackgroundTask:(struct ProcessAndUIAssertion *)arg1;

@end
