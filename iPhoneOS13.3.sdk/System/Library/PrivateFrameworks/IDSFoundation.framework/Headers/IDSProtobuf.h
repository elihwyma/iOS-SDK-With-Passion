//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class IDSMessageContext, NSData, NSMutableDictionary;

@interface IDSProtobuf : NSObject <NSCoding>
{
    NSMutableDictionary *_protoBufParams;
    NSData *_uncompressedData;
}

+ (id)keyRepresentationForType:(unsigned short)arg1 isResponse:(BOOL)arg2;
@property(retain, nonatomic) NSData *uncompressedData; // @synthesize uncompressedData=_uncompressedData;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(retain, nonatomic) IDSMessageContext *context;
@property(nonatomic) BOOL isResponse;
@property(nonatomic) unsigned short type;
@property(retain, nonatomic) NSData *data;
- (id)dictionaryRepresentationWithUncompressedData;
- (id)dictionaryRepresentation;
- (void)dealloc;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithProtobufData:(id)arg1 type:(unsigned short)arg2 isResponse:(BOOL)arg3;
- (id)description;

@end

