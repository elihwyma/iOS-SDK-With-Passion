/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

#import <WorkflowKit/Swift-Protocol.h>

@class NSDate, NSNumber, NSString;

@protocol NSCopying><NSCoding;

@interface WFRowTemplateValue : NSObject <Swift>

{
    _Bool _removable;
    Class _contentItemClass;
    NSString *_contentPropertyName;
    long long _comparisonOperator;
    id <NSCopying><NSCoding> _enumeration;
    NSString *_string;
    NSNumber *_boolean;
    NSNumber *_number;
    NSString *_phone;
    NSString *_email;
    NSNumber *_calendarUnit;
    NSNumber *_byteCountUnit;
    NSDate *_date;
    NSDate *_anotherDate;
}

@property (nonatomic, readonly) Class contentItemClass;
@property (nonatomic, readonly) NSString *contentPropertyName;
@property (nonatomic, readonly) long long comparisonOperator;
@property (nonatomic, readonly) _Bool removable;
@property (retain, nonatomic) id <NSCopying><NSCoding> enumeration;
@property (retain, nonatomic) NSString *string;
@property (retain, nonatomic) NSNumber *boolean;
@property (retain, nonatomic) NSNumber *number;
@property (retain, nonatomic) NSString *phone;
@property (retain, nonatomic) NSString *email;
@property (retain, nonatomic) NSNumber *calendarUnit;
@property (retain, nonatomic) NSNumber *byteCountUnit;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSDate *anotherDate;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentItemClass:(Class)arg1 contentPropertyName:(id)arg2 comparisonOperator:(long long)arg3 removable:(_Bool)arg4;

@end
