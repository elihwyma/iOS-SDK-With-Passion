/*
 Image: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
 */

#import <Foundation/NSData.h>

@interface NSData (InternalUtils)

@property (nonatomic, readonly) NSData *NRSHA256;

+ (id)fromUUID:(id)arg1;
+ (id)dataWithRandomBytesOfSize:(unsigned long long)arg1;

- (_Bool)matchesDataAtFilePath:(id)arg1;
- (id)toUUID;
- (void)NRSHA256:(unsigned char [32])arg1;

@end
