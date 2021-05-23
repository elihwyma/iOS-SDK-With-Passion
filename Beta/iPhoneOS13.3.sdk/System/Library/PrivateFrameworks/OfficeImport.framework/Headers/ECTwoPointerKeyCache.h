/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

@class OITSUPointerKeyDictionary;

__attribute__((visibility("hidden")))
@interface ECTwoPointerKeyCache : NSObject

{
    OITSUPointerKeyDictionary *mCache;
}

- (id)init;
- (void)setObject:(id)arg1 forKey1:(id)arg2 key2:(id)arg3;
- (id)objectForKey1:(id)arg1 key2:(id)arg2;

@end
