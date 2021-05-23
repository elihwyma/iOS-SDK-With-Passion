/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <EventKit/Swift-Protocol.h>

@class NSString;

@protocol EKFrozenMeltedPair <Swift>

@property (nonatomic, readonly) _Bool isFrozen;
@property (nonatomic, readonly) _Bool isPartialObject;
@property (nonatomic, readonly) NSString *uniqueIdentifier;
@property (nonatomic, readonly) NSString *semanticIdentifier;

+ (unsigned short)frozenClass;
+ (unsigned short)meltedClass;

- (unsigned short)setValue:forKey: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithObject: /* Error: Ran out of types for this method. */;
- (unsigned short)valueForKey: /* Error: Ran out of types for this method. */;
- (unsigned short)changeSet;
- (unsigned short)frozenClass;
- (unsigned short)meltedObjectInStore: /* Error: Ran out of types for this method. */;
- (unsigned short)frozenObject;
- (unsigned short)existingMeltedObject;
- (unsigned short)isPropertyUnavailable: /* Error: Ran out of types for this method. */;
- (unsigned short)isCompletelyEqual: /* Error: Ran out of types for this method. */;
- (unsigned short)isEqual:ignoringProperties: /* Error: Ran out of types for this method. */;

@end
