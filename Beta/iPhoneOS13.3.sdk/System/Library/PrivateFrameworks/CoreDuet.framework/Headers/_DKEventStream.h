/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSString, _CDEventStreamProperties, _DKObjectType;

@interface _DKEventStream : NSObject

{
    _CDEventStreamProperties *_eventProperties;
    NSString *_name;
    _DKObjectType *_eventValueType;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) _CDEventStreamProperties *eventProperties;
@property (readonly) NSString *name;
@property (readonly) _DKObjectType *eventValueType;

+ (_Bool)supportsSecureCoding;
+ (id)fromPBCodable:(id)arg1;
+ (id)eventStreamWithName:(id)arg1;
+ (id)eventStreamWithName:(id)arg1 valueType:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)toPBCodable;
- (id)initWithName:(id)arg1 valueType:(id)arg2 cache:(id)arg3;

@end
