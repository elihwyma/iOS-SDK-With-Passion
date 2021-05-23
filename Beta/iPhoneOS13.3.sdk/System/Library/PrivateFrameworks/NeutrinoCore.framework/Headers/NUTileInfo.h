/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@interface NUTileInfo : NSObject

{
    long long _index;
    CDStruct_d58201db _size;
    CDStruct_996ac03c _frameRect;
    CDStruct_996ac03c _contentRect;
}

@property (nonatomic, readonly) long long index;
@property (nonatomic, readonly) CDStruct_912cb5d2 size;
@property (nonatomic, readonly) CDStruct_996ac03c frameRect;
@property (nonatomic, readonly) CDStruct_996ac03c contentRect;

+ (id)tileInfoWithIndex:(long long)arg1 size:(CDStruct_912cb5d2)arg2 frameRect:(CDStruct_996ac03c)arg3 contentRect:(CDStruct_996ac03c)arg4;

- (id)debugDescription;
- (id)translatedAndClippedRegion:(id)arg1;

@end
