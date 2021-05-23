/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

#import <OfficeImport/Swift-Protocol.h>

@class OITSUCustomFormatData;

__attribute__((visibility("hidden")))
@interface OITSUCustomFormatCondition : NSObject <Swift>

{
    int _conditionType;
    double _conditionValue;
    OITSUCustomFormatData *_data;
}

@property (nonatomic, readonly) int conditionType;
@property (nonatomic, readonly) double conditionValue;
@property (nonatomic, readonly) OITSUCustomFormatData *data;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithType:(int)arg1 value:(double)arg2 data:(id)arg3;

@end
