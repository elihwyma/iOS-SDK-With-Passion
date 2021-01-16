//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface CUBitCoder : NSObject
{
    id /* CDUnknownBlockType */ _decryptHandler;
    id /* CDUnknownBlockType */ _encryptHandler;
    NSDictionary *_schema;
}

@property(copy, nonatomic) NSDictionary *schema; // @synthesize schema=_schema;
@property(copy, nonatomic) id /* CDUnknownBlockType */ encryptHandler; // @synthesize encryptHandler=_encryptHandler;
@property(copy, nonatomic) id /* CDUnknownBlockType */ decryptHandler; // @synthesize decryptHandler=_decryptHandler;
// - (void).cxx_destruct;
- (void)_writeValue:(NSUInteger)arg1 bitCount:(unsigned int)arg2 bitVector:(struct __CFBitVector )arg3;
- (NSUInteger)_readValue:(struct __CFBitVector )arg1 bitCount:(unsigned int)arg2 bitIndex:(unsigned int )arg3 err:(int )arg4;
- (id)encodeFields:(id)arg1 variantIdentifier:(id)arg2 info:(id)arg3 error:(id )arg4;
- (id)encodeFields:(id)arg1 variantIdentifier:(id)arg2 error:(id )arg3;
- (id)decodeData:(id)arg1 info:(id)arg2 error:(id )arg3;
- (id)decodeData:(id)arg1 error:(id )arg2;
- (id)decodeBytes:(const void )arg1 length:(NSUInteger)arg2 info:(id)arg3 error:(id )arg4;
- (id)decodeBytes:(const void )arg1 length:(NSUInteger)arg2 error:(id )arg3;
- (void)invalidate;
- (void)dealloc;

@end
