//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PFZlibDataDecompressionOptions : NSObject
{
    BOOL _decompressAllAtOnce;
    int _windowBits;
    id /* CDUnknownBlockType */ _createBuffer;
    id /* CDUnknownBlockType */ _growData;
}

+ (id)defaultOptions;
@property(nonatomic) BOOL decompressAllAtOnce; // @synthesize decompressAllAtOnce=_decompressAllAtOnce;
@property(copy, nonatomic) id /* CDUnknownBlockType */ growData; // @synthesize growData=_growData;
@property(copy, nonatomic) id /* CDUnknownBlockType */ createBuffer; // @synthesize createBuffer=_createBuffer;
@property(nonatomic) int windowBits; // @synthesize windowBits=_windowBits;
// - (void).cxx_destruct;

@end

