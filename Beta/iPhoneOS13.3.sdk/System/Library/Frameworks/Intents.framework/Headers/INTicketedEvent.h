/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class CLPlacemark, INDateComponentsRange, NSString;

@interface INTicketedEvent : NSObject <Swift>

{
    long long _category;
    NSString *_name;
    INDateComponentsRange *_eventDuration;
    CLPlacemark *_location;
}

@property (nonatomic, readonly) long long category;
@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) INDateComponentsRange *eventDuration;
@property (copy, nonatomic, readonly) CLPlacemark *location;
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
- (id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)initWithCategory:(long long)arg1 name:(id)arg2 eventDuration:(id)arg3 location:(id)arg4;

@end
