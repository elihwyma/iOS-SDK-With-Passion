/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <WorkflowKit/Swift-Protocol.h>

@class NSString, RLMRealm;

@protocol RLMCollection <Swift>

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) int type;
@property (nonatomic, readonly, getter=isOptional) _Bool optional;
@property (copy, nonatomic, readonly) NSString *objectClassName;
@property (nonatomic, readonly) RLMRealm *realm;

- (unsigned short)objectAtIndex: /* Error: Ran out of types for this method. */;
- (unsigned short)indexOfObject: /* Error: Ran out of types for this method. */;
- (unsigned short)setValue:forKey: /* Error: Ran out of types for this method. */;
- (unsigned short)objectAtIndexedSubscript: /* Error: Ran out of types for this method. */;
- (unsigned short)firstObject;
- (unsigned short)lastObject;
- (unsigned short)valueForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)objectsWhere:args: /* Error: Ran out of types for this method. */;
- (unsigned short)objectsWithPredicate: /* Error: Ran out of types for this method. */;
- (unsigned short)objectsWhere: /* Error: Ran out of types for this method. */;
- (unsigned short)addNotificationBlock: /* Error: Ran out of types for this method. */;
- (unsigned short)indexOfObjectWhere:args: /* Error: Ran out of types for this method. */;
- (unsigned short)indexOfObjectWithPredicate: /* Error: Ran out of types for this method. */;
- (unsigned short)averageOfProperty: /* Error: Ran out of types for this method. */;
- (unsigned short)sortedResultsUsingDescriptors: /* Error: Ran out of types for this method. */;
- (unsigned short)indexOfObjectWhere: /* Error: Ran out of types for this method. */;
- (unsigned short)sortedResultsUsingKeyPath:ascending: /* Error: Ran out of types for this method. */;
- (unsigned short)minOfProperty: /* Error: Ran out of types for this method. */;
- (unsigned short)maxOfProperty: /* Error: Ran out of types for this method. */;
- (unsigned short)sumOfProperty: /* Error: Ran out of types for this method. */;

@end
