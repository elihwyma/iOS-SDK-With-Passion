/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHDDataValue : NSObject

{
    struct CHDDataPoint mDataPoint;
}

+ (id)dataValue;
+ (id)dataValueWithIndex:(long long)arg1 value:(struct EDValue *)arg2;

- (id)init;
- (id)description;
- (struct EDValue *)value;
- (long long)index;
- (void)setValue:(struct EDValue *)arg1;
- (id).cxx_construct;
- (void)setIndex:(long long)arg1;
- (struct CHDDataPoint *)dataPoint;
- (void)setDataPoint:(struct CHDDataPoint *)arg1;
- (unsigned long long)contentFormatId;
- (void)setContentFormatId:(unsigned long long)arg1;
- (id)contentFormatWithResources:(id)arg1;
- (id)initWithIndex:(long long)arg1 value:(struct EDValue *)arg2;
- (void)setContentFormatWithResources:(id)arg1 resources:(id)arg2;

@end
