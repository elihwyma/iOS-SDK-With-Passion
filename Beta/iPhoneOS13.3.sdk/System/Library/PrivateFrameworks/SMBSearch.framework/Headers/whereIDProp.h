/*
 Image: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
 */

#import <Foundation/NSObject.h>

@class cbaseVariant, cdbProp;

@interface whereIDProp : NSObject

{
    cdbProp *_cProps;
    cbaseVariant *_variant;
}

@property (retain) cdbProp *cProps;
@property (retain) cbaseVariant *variant;

- (unsigned int)propertyID;
- (int)encodeBuffer:(id)arg1 BufferOffset:(unsigned int)arg2 BytesWritten:(unsigned int *)arg3;
- (id)initWithUInt:(unsigned int)arg1;

@end
