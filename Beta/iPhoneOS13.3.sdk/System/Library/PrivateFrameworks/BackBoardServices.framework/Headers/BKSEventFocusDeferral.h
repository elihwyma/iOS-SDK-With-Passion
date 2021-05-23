/*
 Image: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

#import <Foundation/NSObject.h>

@class BKSEventFocusDeferralProperties;

@interface BKSEventFocusDeferral : NSObject

{
    int _priority;
    BKSEventFocusDeferralProperties *_properties;
    BKSEventFocusDeferralProperties *_deferredProperties;
}

@property (nonatomic, readonly) BKSEventFocusDeferralProperties *properties;
@property (nonatomic, readonly) BKSEventFocusDeferralProperties *deferredProperties;
@property (nonatomic, readonly) int priority;
@property (nonatomic, readonly) _Bool isCycle;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)conciseDescription;
- (id)initWithProperties:(id)arg1 deferredProperties:(id)arg2;
- (id)initWithProperties:(id)arg1 deferredProperties:(id)arg2 withPriority:(int)arg3;
- (_Bool)defersProperties:(id)arg1;
- (id)deferredPropertiesForProperties:(id)arg1;

@end
