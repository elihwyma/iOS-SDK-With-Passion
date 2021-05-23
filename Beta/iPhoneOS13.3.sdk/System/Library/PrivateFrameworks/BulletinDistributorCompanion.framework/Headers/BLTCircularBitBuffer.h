/*
 Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

#import <Foundation/NSObject.h>

@class NSMutableData;

@interface BLTCircularBitBuffer : NSObject

{
    NSMutableData *_bitVector;
    unsigned long long _beginIndex;
    unsigned long long _capacity;
}

@property (nonatomic, readonly) unsigned long long beginIndex;
@property (nonatomic, readonly) unsigned long long capacity;

+ (unsigned long long)actualCapacity:(unsigned long long)arg1;

- (id)initWithCapacity:(unsigned long long)arg1;
- (void)clear;
- (void)_setBit:(_Bool)arg1 atIndex:(unsigned long long)arg2;
- (id)initWithData:(id)arg1 andIndex:(unsigned long long)arg2;
- (void)setBit:(_Bool)arg1 atIndex:(unsigned long long)arg2;
- (unsigned char)bitAtIndex:(unsigned long long)arg1;
- (id)bitVector;

@end
