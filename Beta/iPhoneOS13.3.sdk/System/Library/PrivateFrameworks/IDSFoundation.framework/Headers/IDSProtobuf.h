/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

#import <IDSFoundation/Swift-Protocol.h>

@class IDSMessageContext, NSData, NSMutableDictionary;

@interface IDSProtobuf : NSObject <Swift>

{
    NSMutableDictionary *_protoBufParams;
    NSData *_uncompressedData;
}

@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) NSData *uncompressedData;
@property (nonatomic) unsigned short type;
@property (nonatomic) _Bool isResponse;
@property (retain, nonatomic) IDSMessageContext *context;

+ (id)keyRepresentationForType:(unsigned short)arg1 isResponse:(_Bool)arg2;

- (id)init;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)dictionaryRepresentation;
- (id)initWithProtobufData:(id)arg1 type:(unsigned short)arg2 isResponse:(_Bool)arg3;
- (id)dictionaryRepresentationWithUncompressedData;

@end
