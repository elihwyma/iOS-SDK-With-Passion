/*
 Image: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

#import <CoreData/NSManagedObject.h>

@class NSSet;

@interface STCoreOrganization : NSManagedObject

@property (retain, nonatomic) NSSet *enqueuedPayloads;
@property (retain, nonatomic) NSSet *pendingPayloads;
@property (retain, nonatomic) NSSet *recentPayloads;
@property (copy, nonatomic) NSSet *blueprints;

@end
