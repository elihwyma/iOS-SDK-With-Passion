/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <BackBoardServices/BKSHIDEventDescriptor.h>

@interface BKSHIDEventUsagePairDescriptor : BKSHIDEventDescriptor

{
    unsigned int _page;
    unsigned int _usage;
}

@property (readonly) unsigned int page;
@property (readonly) unsigned int usage;

+ (_Bool)supportsSecureCoding;
+ (id)descriptorForHIDEventType:(unsigned int)arg1 page:(unsigned short)arg2 usage:(unsigned short)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (_Bool)describes:(id)arg1;
- (_Bool)matchesHIDEvent:(struct __IOHIDEvent *)arg1;
- (id)_initWithPage:(unsigned int)arg1 usage:(unsigned int)arg2 eventType:(unsigned int)arg3;
- (_Bool)_page:(unsigned int)arg1 usage:(unsigned int)arg2 matchesHIDEvent:(struct __IOHIDEvent *)arg3;

@end
