/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class INPerson, NSDate, NSNumber, NSString;

@interface INCallRecord : NSObject <Swift>

{
    NSString *_identifier;
    NSDate *_dateCreated;
    INPerson *_caller;
    long long _callRecordType;
    NSNumber *_callDuration;
    NSNumber *_unseen;
    long long _callCapability;
    NSNumber *_numberOfCalls;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (copy, nonatomic, readonly) NSDate *dateCreated;
@property (copy, nonatomic, readonly) INPerson *caller;
@property (nonatomic, readonly) long long callRecordType;
@property (copy, nonatomic, readonly) NSNumber *callDuration;
@property (copy, nonatomic, readonly) NSNumber *unseen;
@property (nonatomic, readonly) long long callCapability;
@property (copy, nonatomic, readonly) NSNumber *numberOfCalls;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)_intents_cacheableObjects;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)initWithIdentifier:(id)arg1 dateCreated:(id)arg2 caller:(id)arg3 callRecordType:(long long)arg4 callCapability:(long long)arg5 callDuration:(id)arg6 unseen:(id)arg7 numberOfCalls:(id)arg8;
- (id)initWithIdentifier:(id)arg1 dateCreated:(id)arg2 caller:(id)arg3 callRecordType:(long long)arg4 callCapability:(long long)arg5 callDuration:(id)arg6 unseen:(id)arg7;

@end
