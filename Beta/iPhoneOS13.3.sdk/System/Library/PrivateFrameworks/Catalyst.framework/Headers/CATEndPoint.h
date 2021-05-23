/*
 Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

#import <Foundation/NSObject.h>

@class CATAddress, NSData;

@interface CATEndPoint : NSObject

{
    unsigned int _port;
    NSData *_data;
    CATAddress *_address;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) CATAddress *address;
@property (nonatomic, readonly) unsigned int port;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithData:(id)arg1;
- (id)initWithAddress:(id)arg1 port:(unsigned int)arg2;
- (_Bool)isEqualToEndPoint:(id)arg1;

@end
