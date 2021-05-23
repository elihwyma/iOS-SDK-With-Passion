/*
 Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACoreDAVGlue.framework/DACoreDAVGlue
 */

#import <DataAccess/DATaskManager.h>

@class NSMutableSet, NSRunLoop, NSString;

@interface DACoreDAVTaskManager : DATaskManager

{
    NSMutableSet *_applicationsShowingActivity;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (retain, nonatomic) NSRunLoop *workRunLoop;

- (void)dealloc;
- (id)initWithAccount:(id)arg1;
- (void)taskManagerDidAddTask:(id)arg1;
- (void)taskManagerWillRemoveTask:(id)arg1;
- (void)submitIndependentCoreDAVTask:(id)arg1;
- (void)submitQueuedCoreDAVTask:(id)arg1;
- (void)_updateSpinner:(_Bool)arg1;
- (void)coreDAVTaskRequestModal:(id)arg1;
- (void)coreDAVTaskEndModal:(id)arg1;
- (void)coreDAVTaskDidFinish:(id)arg1;

@end
