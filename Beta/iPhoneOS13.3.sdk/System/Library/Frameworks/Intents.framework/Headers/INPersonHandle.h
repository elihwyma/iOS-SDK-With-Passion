/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class NSString;

@interface INPersonHandle : NSObject <Swift>

{
    NSString *_value;
    long long _type;
    NSString *_label;
    long long _emergencyType;
}

@property (nonatomic, readonly) long long emergencyType;
@property (copy, nonatomic, readonly) NSString *value;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSString *label;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithValue:(id)arg1 type:(long long)arg2;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)initWithValue:(id)arg1 type:(long long)arg2 label:(id)arg3;
- (id)initWithValue:(id)arg1 type:(long long)arg2 label:(id)arg3 emergencyType:(long long)arg4;

@end
