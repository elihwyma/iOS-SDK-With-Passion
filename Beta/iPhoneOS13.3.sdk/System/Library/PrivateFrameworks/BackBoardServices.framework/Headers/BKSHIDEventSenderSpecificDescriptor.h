/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <BackBoardServices/BKSHIDEventDescriptor.h>

@interface BKSHIDEventSenderSpecificDescriptor : BKSHIDEventDescriptor

{
    unsigned long long _senderID;
    BKSHIDEventDescriptor *_sourceDescriptor;
}

@property (retain, nonatomic) BKSHIDEventDescriptor *sourceDescriptor;
@property (readonly) unsigned long long senderID;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)describes:(id)arg1;
- (id)initWithDescriptor:(id)arg1 senderID:(unsigned long long)arg2;
- (id)descriptorByAddingSenderIDToMatchCriteria:(unsigned long long)arg1;
- (_Bool)matchesHIDEvent:(struct __IOHIDEvent *)arg1;

@end
