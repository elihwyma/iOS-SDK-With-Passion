/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface WFSSHKeyDecoder : NSObject

{
    NSData *_data;
    unsigned long long _offset;
    unsigned long long _length;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic) unsigned long long offset;
@property (nonatomic) unsigned long long length;

- (id)initWithData:(id)arg1;
- (void)advanceBy:(unsigned long long)arg1;
- (const char *)currentPointer;
- (unsigned int)decodeInteger;
- (id)decodeStringWithLength:(unsigned long long)arg1;
- (id)decodeStringWithPrecedingLength;
- (id)decodeDataWithLength:(unsigned long long)arg1;
- (id)decodeDataWithPrecedingLength;

@end
