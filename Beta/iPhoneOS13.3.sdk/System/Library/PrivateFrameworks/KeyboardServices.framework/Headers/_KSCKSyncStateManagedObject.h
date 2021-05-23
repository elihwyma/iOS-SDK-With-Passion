/*
 Image: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
 */

#import <CoreData/NSManagedObject.h>

@class NSData;

@interface _KSCKSyncStateManagedObject : NSManagedObject

@property (retain, nonatomic) NSData *fetchChangeToken;
@property (nonatomic) _Bool didPullOnce;

@end
