/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@class GPBSourceContext, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface GPBType

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSMutableArray *fieldsArray;
@property (nonatomic, readonly) unsigned long long fieldsArray_Count;
@property (retain, nonatomic) NSMutableArray *oneofsArray;
@property (nonatomic, readonly) unsigned long long oneofsArray_Count;
@property (retain, nonatomic) NSMutableArray *optionsArray;
@property (nonatomic, readonly) unsigned long long optionsArray_Count;
@property (retain, nonatomic) GPBSourceContext *sourceContext;
@property (nonatomic) _Bool hasSourceContext;
@property (nonatomic) int syntax;

+ (id)descriptor;

@end
