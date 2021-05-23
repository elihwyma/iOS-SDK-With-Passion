/*
 Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@protocol OS_dispatch_queue;

@interface MCDependencyReader : NSObject

{
    NSObject<OS_dispatch_queue> *_memberQueue;
    NSMutableDictionary *_memberQueueSystemDomainsDict;
    NSMutableDictionary *_memberQueueUserDomainsDict;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue;
@property (retain, nonatomic) NSMutableDictionary *memberQueueSystemDomainsDict;
@property (retain, nonatomic) NSMutableDictionary *memberQueueUserDomainsDict;

+ (id)sharedReader;
+ (id)systemStoragePath;
+ (id)userStoragePath;
+ (void)setSystemStoragePath:(id)arg1 userStoragePath:(id)arg2;

- (id)init;
- (id)_init;
- (void)invalidateCache;
- (void)memberQueueRereadSystemDomainsDict;
- (void)memberQueueRereadUserDomainsDict;
- (id)memberQueueDependentsOfParent:(id)arg1 inSystemDomain:(id)arg2;
- (id)memberQueueDependentsOfParent:(id)arg1 inUserDomain:(id)arg2;
- (id)memberQueueParentsInDomain:(id)arg1;
- (id)memberQueueDependentsOfParent:(id)arg1 inDomain:(id)arg2;
- (id)memberQueueParentsInSystemDomain:(id)arg1;
- (id)memberQueueParentsInUserDomain:(id)arg1;
- (id)systemDomainsDict;
- (id)userDomainsDict;
- (id)parentsInDomain:(id)arg1;
- (id)dependentsOfParent:(id)arg1 inDomain:(id)arg2;
- (id)parentsInSystemDomain:(id)arg1;
- (id)parentsInUserDomain:(id)arg1;
- (id)dependentsOfParent:(id)arg1 inSystemDomain:(id)arg2;
- (id)dependentsOfParent:(id)arg1 inUserDomain:(id)arg2;
- (void)memberQueueRereadDomainsDict;

@end
