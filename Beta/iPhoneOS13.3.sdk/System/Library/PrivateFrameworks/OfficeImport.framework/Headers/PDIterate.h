/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface PDIterate : NSObject

{
    int mType;
    _Bool mIsBackwards;
    _Bool mIsPercentage;
    double mValue;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (int)type;
- (void)setType:(int)arg1;
- (double)value;
- (void)setValue:(double)arg1;
- (_Bool)isBackwards;
- (_Bool)isValuePercentage;
- (void)setIsBackwards:(_Bool)arg1;
- (void)setIsValuePercentage:(_Bool)arg1;

@end
