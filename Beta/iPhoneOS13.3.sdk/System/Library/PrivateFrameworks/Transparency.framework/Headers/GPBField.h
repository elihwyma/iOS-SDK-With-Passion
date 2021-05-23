/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface GPBField

@property (nonatomic) int kind;
@property (nonatomic) int cardinality;
@property (nonatomic) int number;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *typeURL;
@property (nonatomic) int oneofIndex;
@property (nonatomic) _Bool packed;
@property (retain, nonatomic) NSMutableArray *optionsArray;
@property (nonatomic, readonly) unsigned long long optionsArray_Count;
@property (copy, nonatomic) NSString *jsonName;
@property (copy, nonatomic) NSString *defaultValue;

+ (id)descriptor;

@end
