/*
 Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
 */

#import <CalendarDaemon/CADFilter.h>

@class NSDate, NSString;

@interface CADPropertyFilter : CADFilter

{
    long long _property;
    long long _comparison;
    NSString *_stringValue;
    long long _integerValue;
    NSDate *_dateValue;
}

@property (nonatomic, readonly) long long property;
@property (nonatomic, readonly) long long comparison;
@property (nonatomic, readonly) NSString *stringValue;
@property (nonatomic, readonly) long long integerValue;
@property (nonatomic, readonly) NSDate *dateValue;
@property (nonatomic, readonly) _Bool isString;
@property (nonatomic, readonly) _Bool isInteger;
@property (nonatomic, readonly) _Bool isDate;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)validate;
- (id)initWithProperty:(long long)arg1 comparison:(long long)arg2 integerValue:(long long)arg3;
- (id)initWithProperty:(long long)arg1 comparison:(long long)arg2 stringValue:(id)arg3;
- (id)initWithProperty:(long long)arg1 comparison:(long long)arg2 dateValue:(id)arg3;
- (_Bool)applicableToEntityType:(int)arg1;
- (id)extendWhereClause:(id)arg1 usingOperation:(long long)arg2 withValues:(id)arg3 andTypes:(id)arg4;
- (_Bool)validateWithRequiredPropertyType:(int)arg1;

@end
