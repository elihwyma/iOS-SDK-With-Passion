//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NUTileInfo : NSObject
{
    long long _index;
    CDStruct_d58201db _size;
    CDStruct_996ac03c _frameRect;
    CDStruct_996ac03c _contentRect;
}

+ (id)tileInfoWithIndex:(long long)arg1 size:(CDStruct_912cb5d2)arg2 frameRect:(CDStruct_996ac03c)arg3 contentRect:(CDStruct_996ac03c)arg4;
@property(readonly, nonatomic) CDStruct_996ac03c contentRect; // @synthesize contentRect=_contentRect;
@property(readonly, nonatomic) CDStruct_996ac03c frameRect; // @synthesize frameRect=_frameRect;
@property(readonly, nonatomic) CDStruct_912cb5d2 size; // @synthesize size=_size;
@property(readonly, nonatomic) long long index; // @synthesize index=_index;
- (id)debugDescription;
- (id)translatedAndClippedRegion:(id)arg1;

@end

