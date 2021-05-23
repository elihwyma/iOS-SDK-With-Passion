/*
 Image: /System/Library/PrivateFrameworks/Tips.framework/Tips
 */

#import <Tips/TPSDeliveryEvent.h>

@class NSString, TPSDeliveryDuetEventMeta, TPSDeliveryDuetEventSource, TPSDeliveryDuetEventValue;

@interface TPSDeliveryDuetEvent : TPSDeliveryEvent

{
    NSString *_stream;
    TPSDeliveryDuetEventMeta *_meta;
    TPSDeliveryDuetEventSource *_source;
    TPSDeliveryDuetEventValue *_value;
}

@property (copy, nonatomic) NSString *stream;
@property (copy, nonatomic) TPSDeliveryDuetEventMeta *meta;
@property (copy, nonatomic) TPSDeliveryDuetEventSource *source;
@property (copy, nonatomic) TPSDeliveryDuetEventValue *value;

+ (_Bool)supportsSecureCoding;
+ (id)classSet;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)newStateFromStateDictionary:(id)arg1;

@end
