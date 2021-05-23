/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSData, NSMutableData;

@interface WFSSHKeyEncoder : NSObject

{
    NSMutableData *_data;
}

@property (nonatomic, readonly) NSMutableData *data;
@property (nonatomic, readonly) unsigned long long encodedLength;
@property (nonatomic, readonly) NSData *encodedData;

- (id)init;
- (void)encodeData:(id)arg1;
- (void)encodeString:(id)arg1;
- (void)encodeChar:(BOOL)arg1;
- (void)encodeInteger:(unsigned int)arg1;
- (void)encodeStringWithPreceedingLength:(id)arg1;
- (void)encodeDataWithPreceedingLength:(id)arg1;

@end
