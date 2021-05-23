/*
 Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSUHasher : NSObject

{
    unsigned long long _currentHash;
}

@property (nonatomic) unsigned long long currentHash;

- (id)init;
- (void)addObject:(id)arg1;
- (unsigned long long)hashValue;
- (void)p_appendUnsignedInteger:(unsigned long long)arg1;
- (void)addInt:(int)arg1;
- (void)addUnsignedInt:(unsigned int)arg1;
- (void)addBool:(_Bool)arg1;
- (void)addInteger:(long long)arg1;
- (void)addUnsignedInteger:(unsigned long long)arg1;

@end
