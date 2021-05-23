/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OADShapeGeometry : NSObject

{
    _Bool mIsEscher;
    NSMutableDictionary *mAdjustValues;
}

- (id)init;
- (id)description;
- (int)type;
- (id)adjustValues;
- (id)equivalentCustomGeometry;
- (_Bool)isEscher;
- (int)adjustValueAtIndex:(unsigned int)arg1;
- (void)setIsEscher:(_Bool)arg1;
- (unsigned long long)adjustValueCount;
- (_Bool)hasAdjustValueAtIndex:(unsigned int)arg1;
- (void)setAdjustValue:(int)arg1 atIndex:(unsigned int)arg2;

@end
