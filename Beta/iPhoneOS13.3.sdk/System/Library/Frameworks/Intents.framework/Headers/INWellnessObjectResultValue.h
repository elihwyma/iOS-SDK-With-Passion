/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Foundation/NSObject.h>

#import <Intents/Swift-Protocol.h>

@class INDateComponentsRange, NSArray, NSString;

@interface INWellnessObjectResultValue : NSObject <Swift>

{
    INDateComponentsRange *_recordDate;
    NSString *_unit;
    NSArray *_values;
    long long _resultType;
}

@property (copy, nonatomic, readonly) INDateComponentsRange *recordDate;
@property (copy, nonatomic, readonly) NSString *unit;
@property (copy, nonatomic, readonly) NSArray *values;
@property (nonatomic, readonly) long long resultType;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (id)initWithRecordDate:(id)arg1 unit:(id)arg2 values:(id)arg3 resultType:(long long)arg4;

@end
