/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@class GPBListValue, GPBStruct, NSString;

__attribute__((visibility("hidden")))
@interface GPBValue

@property (nonatomic, readonly) int kindOneOfCase;
@property (nonatomic) int nullValue;
@property (nonatomic) double numberValue;
@property (copy, nonatomic) NSString *stringValue;
@property (nonatomic) _Bool boolValue;
@property (retain, nonatomic) GPBStruct *structValue;
@property (retain, nonatomic) GPBListValue *listValue;

+ (id)descriptor;

@end
