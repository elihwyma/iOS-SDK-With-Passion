/*
 Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@protocol NSObject;

@interface IDSSocketPairMessage : NSObject

{
    NSData *_underlyingData;
    unsigned char _command;
    id <NSObject> _context;
    NSString *_topic;
    _Bool _useDynamicServiceName;
    _Bool _cancelled;
}

@property (nonatomic, readonly) unsigned char command;
@property (nonatomic, readonly) NSData *underlyingData;
@property (nonatomic, readonly) unsigned long long underlyingDataLength;
@property (retain, nonatomic) id <NSObject> context;
@property (retain, nonatomic) NSString *topic;
@property (nonatomic) _Bool useDynamicServiceName;
@property (nonatomic) _Bool cancelled;

+ (unsigned int)headerDataSize;
+ (id)messageWithCommand:(unsigned char)arg1 data:(id)arg2;
+ (unsigned int)dataLengthFromHeaderData:(id)arg1;
+ (id)messageWithData:(id)arg1;
+ (id)messageWithHeaderData:(id)arg1 data:(id)arg2;

- (id)initWithCommand:(unsigned char)arg1 underlyingData:(id)arg2;
- (id)_nonHeaderData;
- (id)_existingUnderlyingData;

@end
