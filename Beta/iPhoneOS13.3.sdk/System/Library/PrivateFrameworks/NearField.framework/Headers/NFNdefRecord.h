/*
 Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface NFNdefRecord : NSObject

{
    unsigned char _firstOctet;
    NSData *_identifier;
    NSData *_type;
    NSData *_payload;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic) unsigned char header;
@property (nonatomic) _Bool messageBegin;
@property (nonatomic) _Bool messageEnd;
@property (nonatomic) _Bool shortRecord;
@property (nonatomic) _Bool chunked;
@property (nonatomic) unsigned char typeNameFormat;
@property (retain, nonatomic) NSData *type;
@property (retain, nonatomic) NSData *payload;
@property (retain, nonatomic) NSData *identifier;

+ (_Bool)supportsSecureCoding;
+ (id)recordWithURI:(id)arg1;
+ (id)emptyRecord;
+ (id)recordsFromBytes:(const void *)arg1 length:(unsigned int)arg2;
+ (id)recordWithText:(id)arg1 lang:(id)arg2;
+ (id)recordWithTelephone:(id)arg1;

- (id)initWithBytes:(const void *)arg1 length:(unsigned int)arg2;
- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)asData;
- (id)decode;
- (id)initWithNDEFRecord:(id)arg1;
- (void)_setIdLengthPresent:(_Bool)arg1;
- (_Bool)isURIRecord;
- (_Bool)_idLengthPresent;

@end
