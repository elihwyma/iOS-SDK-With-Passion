/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TCImportFontCacheKey : NSObject

{
    int _size;
    NSString *_name;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic) int size;

+ (id)createFontCacheKeyForName:(id)arg1 size:(int)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end
