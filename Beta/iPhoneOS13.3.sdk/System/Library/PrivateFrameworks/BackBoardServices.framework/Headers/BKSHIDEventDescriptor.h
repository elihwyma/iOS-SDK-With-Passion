/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <Foundation/NSObject.h>

#import <BackBoardServices/Swift-Protocol.h>

@class NSString;

@interface BKSHIDEventDescriptor : NSObject <Swift>

{
    unsigned int _hidEventType;
}

@property (nonatomic, readonly) unsigned int hidEventType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;
+ (id)descriptorForHIDEvent:(struct __IOHIDEvent *)arg1;
+ (id)descriptorWithEventType:(unsigned int)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)initWithEventType:(unsigned int)arg1;
- (_Bool)describes:(id)arg1;
- (id)descriptorByAddingSenderIDToMatchCriteria:(unsigned long long)arg1;
- (_Bool)matchesHIDEvent:(struct __IOHIDEvent *)arg1;

@end
