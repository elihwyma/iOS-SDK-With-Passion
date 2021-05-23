/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class INAirport, NSString;

@interface INAirportGate : NSObject <Swift>

{
    INAirport *_airport;
    NSString *_terminal;
    NSString *_gate;
}

@property (copy, nonatomic, readonly) INAirport *airport;
@property (copy, nonatomic, readonly) NSString *terminal;
@property (copy, nonatomic, readonly) NSString *gate;
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
- (id)initWithAirport:(id)arg1 terminal:(id)arg2 gate:(id)arg3;

@end
