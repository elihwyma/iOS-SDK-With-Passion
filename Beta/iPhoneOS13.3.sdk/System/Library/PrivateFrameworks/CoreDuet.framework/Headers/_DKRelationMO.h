/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <CoreData/NSManagedObject.h>

@class NSString, _DKObjectMO;

@interface _DKRelationMO : NSManagedObject

@property (retain, nonatomic) NSString *verbPhrase;
@property (retain, nonatomic) _DKObjectMO *subject;
@property (retain, nonatomic) _DKObjectMO *object;

@end
