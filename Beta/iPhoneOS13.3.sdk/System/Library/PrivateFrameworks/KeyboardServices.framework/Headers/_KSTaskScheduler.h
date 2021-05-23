/*
 Image: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface _KSTaskScheduler : NSObject

{
    NSMutableDictionary *_allTasks;
}

@property (retain, nonatomic) NSMutableDictionary *allTasks;

+ (id)sharedInstance;

- (id)init;
- (void)registerTask:(id)arg1;
- (void)unregisterTask:(id)arg1;

@end
