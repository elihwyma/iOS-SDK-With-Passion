/*
 Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

#import <NearField/Swift-Protocol.h>

@class NSData;

@protocol NFNdefRecord <Swift>

@property (nonatomic) unsigned char header;
@property (nonatomic) _Bool messageBegin;
@property (nonatomic) _Bool messageEnd;
@property (nonatomic) _Bool shortRecord;
@property (nonatomic) _Bool chunked;
@property (nonatomic) unsigned char typeNameFormat;
@property (retain, nonatomic) NSData *type;
@property (retain, nonatomic) NSData *payload;
@property (retain, nonatomic) NSData *identifier;

- (unsigned short)asData;
- (unsigned short)decode;
- (unsigned short)initWithNDEFRecord: /* Error: Ran out of types for this method. */;
- (unsigned short)isURIRecord;

@end
