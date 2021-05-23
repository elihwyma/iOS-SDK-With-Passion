/*
 Image: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
 */

@class GPBAny, NSString;

__attribute__((visibility("hidden")))
@interface GPBOption

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) GPBAny *value;
@property (nonatomic) _Bool hasValue;

+ (id)descriptor;

@end
