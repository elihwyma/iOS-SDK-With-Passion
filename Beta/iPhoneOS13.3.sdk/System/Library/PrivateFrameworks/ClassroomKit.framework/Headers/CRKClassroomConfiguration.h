/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@interface CRKClassroomConfiguration : NSObject

+ (id)configurationSource;
+ (void)setConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)fetchConfiguration:(CDUnknownBlockType)arg1;
+ (id)studentDaemonConnection;
+ (id)setOfActiveRestrictionUUIDs:(id)arg1;

@end
