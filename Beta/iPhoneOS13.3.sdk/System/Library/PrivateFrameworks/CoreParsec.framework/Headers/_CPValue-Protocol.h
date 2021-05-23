/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <CoreParsec/Swift-Protocol.h>

@class NSData, NSString, _CPListValue, _CPStruct;

@protocol _CPValue <Swift>

@property (nonatomic) int null_value;
@property (nonatomic) double number_value;
@property (copy, nonatomic) NSString *string_value;
@property (nonatomic) _Bool bool_value;
@property (retain, nonatomic) _CPStruct *struct_value;
@property (retain, nonatomic) _CPListValue *list_value;
@property (copy, nonatomic) NSData *bytes_value;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, readonly) unsigned long long whichKind;

- (unsigned short)initWithDictionary: /* Error: Ran out of types for this method. */;
- (unsigned short)initWithJSON: /* Error: Ran out of types for this method. */;

@end
