/*
 Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface ASRelationshipEvent : NSObject

{
    unsigned short _type;
    unsigned short _anchor;
    NSDate *_timestamp;
}

@property (nonatomic, readonly) unsigned short type;
@property (nonatomic, readonly) unsigned short anchor;
@property (nonatomic, readonly) NSDate *timestamp;

+ (id)relationshipEventWithRecord:(id)arg1;
+ (id)_relationshipEventWithCodable:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)_codableRelationshipEvent;
- (id)initWithType:(unsigned short)arg1 anchor:(unsigned short)arg2 timestamp:(id)arg3;
- (_Bool)isEqualToRelationshipEvent:(id)arg1;

@end
