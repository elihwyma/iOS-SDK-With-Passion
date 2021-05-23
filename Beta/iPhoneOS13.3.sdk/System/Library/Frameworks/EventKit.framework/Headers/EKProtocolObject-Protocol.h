/*
 Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

#import <EventKit/Swift-Protocol.h>

@class NSDictionary;

@protocol EKProtocolObject <Swift>

@property (nonatomic, readonly) _Bool canBeConvertedToFullObject;
@property (nonatomic, readonly) _Bool isPartialObject;
@property (nonatomic, readonly) NSDictionary *preFrozenRelationshipObjects;

+ (unsigned short)propertiesUnavailableForPartialObjects;

- (unsigned short)isFrozen;
- (unsigned short)isNew;
- (unsigned short)isPropertyUnavailable: /* Error: Ran out of types for this method. */;

@end
