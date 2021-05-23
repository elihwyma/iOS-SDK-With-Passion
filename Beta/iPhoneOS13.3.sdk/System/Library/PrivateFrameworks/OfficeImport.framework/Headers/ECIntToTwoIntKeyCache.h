/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ECIntToTwoIntKeyCache : NSObject

{
    NSMutableDictionary *mCache;
}

+ (id)keyForKey1:(unsigned long long)arg1 key2:(unsigned long long)arg2;

- (id)init;
- (_Bool)integerIsPresentForKey1:(unsigned long long)arg1 key2:(unsigned long long)arg2 outValue:(unsigned long long *)arg3;
- (void)setObject:(unsigned long long)arg1 forKey1:(unsigned long long)arg2 key2:(unsigned long long)arg3;

@end
