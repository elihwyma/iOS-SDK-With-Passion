//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSData;

@interface HMDTLVParser : HMFObject
{
    NSData *_tlvData;
}

+ (id)parserWithData:(id)arg1;
// - (void).cxx_destruct;
- (id)parseResponseForArray:(NSUInteger)arg1;
- (id)parseResponseForUUID:(NSUInteger)arg1;
- (id)parseResponseForString:(NSUInteger)arg1;
- (id)parseResponseForUInt16:(NSUInteger)arg1;
- (id)parseResponseForUInt8:(NSUInteger)arg1;
- (id)parseResponseForNumber:(NSUInteger)arg1;
- (id)parseResponseForData:(NSUInteger)arg1;
- (id)initWithData:(id)arg1;

@end

