/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@interface INRecurrenceRule : NSObject <Swift>

{
    unsigned long long _interval;
    long long _frequency;
}

@property (nonatomic, readonly) unsigned long long interval;
@property (nonatomic, readonly) long long frequency;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)initWithInterval:(unsigned long long)arg1 frequency:(long long)arg2;

@end
