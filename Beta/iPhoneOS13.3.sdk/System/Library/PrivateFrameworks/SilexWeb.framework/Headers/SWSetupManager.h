/*
 Image: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
 */

#import <Foundation/NSObject.h>

@class NSMutableOrderedSet, NSString;

@protocol SWLogger;

@interface SWSetupManager : NSObject

{
    id <SWLogger> _logger;
    NSMutableOrderedSet *_tasks;
}

@property (nonatomic, readonly) id <SWLogger> logger;
@property (nonatomic, readonly) NSMutableOrderedSet *tasks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)addTask:(id)arg1;
- (id)initWithLogger:(id)arg1;
- (void)performTasks;

@end
