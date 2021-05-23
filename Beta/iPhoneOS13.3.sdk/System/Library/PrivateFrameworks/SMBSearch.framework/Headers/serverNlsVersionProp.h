/*
 Image: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
 */

#import <Foundation/NSObject.h>

@class cbaseVariant, cdbProp;

@interface serverNlsVersionProp : NSObject

{
    cdbProp *_cProps;
    cbaseVariant *_variant;
}

@property (retain) cdbProp *cProps;
@property (retain) cbaseVariant *variant;

- (id)initWithInt:(int)arg1;
- (unsigned int)propertyID;
- (int)encodeBuffer:(id)arg1 BufferOffset:(unsigned int)arg2 BytesWritten:(unsigned int *)arg3;

@end
