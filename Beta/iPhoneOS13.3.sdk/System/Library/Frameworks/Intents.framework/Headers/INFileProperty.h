/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class INDateComponentsRange, INPerson, NSNumber, NSString;

@interface INFileProperty : NSObject <Swift>

{
    NSString *_name;
    NSString *_qualifier;
    NSString *_type;
    INDateComponentsRange *_dateComponentsRange;
    INPerson *_person;
    NSString *_value;
    NSNumber *_quantity;
}

@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *qualifier;
@property (copy, nonatomic, readonly) NSString *type;
@property (copy, nonatomic, readonly) INDateComponentsRange *dateComponentsRange;
@property (copy, nonatomic, readonly) INPerson *person;
@property (copy, nonatomic, readonly) NSString *value;
@property (copy, nonatomic, readonly) NSNumber *quantity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)initWithName:(id)arg1 qualifier:(id)arg2 type:(id)arg3 dateComponentsRange:(id)arg4 person:(id)arg5 value:(id)arg6 quantity:(id)arg7;

@end
