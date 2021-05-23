/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class INSpeakableString, NSString;

@interface INTimer : NSObject <Swift>

{
    INSpeakableString *_label;
    double _duration;
    double _remainingTime;
    NSString *_identifier;
    long long _state;
    long long _type;
}

@property (copy, nonatomic, readonly) INSpeakableString *label;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) double remainingTime;
@property (copy, nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) long long type;
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
- (id)initWithLabel:(id)arg1 duration:(double)arg2 remainingTime:(double)arg3 identifier:(id)arg4 state:(long long)arg5 type:(long long)arg6;
- (id)initWithLabel:(id)arg1 duration:(double)arg2 remainingTime:(double)arg3 identifier:(id)arg4 state:(long long)arg5;

@end
