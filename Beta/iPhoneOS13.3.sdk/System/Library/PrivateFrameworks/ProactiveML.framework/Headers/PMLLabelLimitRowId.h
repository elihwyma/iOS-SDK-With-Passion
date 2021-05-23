/*
 Image: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PMLLabelLimitRowId : NSObject

{
    NSString *_label;
    long long _limit;
    long long _rowId;
}

@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) long long limit;
@property (nonatomic, readonly) long long rowId;

+ (id)labelLimitRowIdWithLabel:(id)arg1 limit:(long long)arg2 rowId:(long long)arg3;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithLabel:(id)arg1 limit:(long long)arg2 rowId:(long long)arg3;
- (_Bool)isEqualToLabelLimitRowId:(id)arg1;

@end
