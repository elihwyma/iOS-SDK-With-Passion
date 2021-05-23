/*
 Image: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
 */

#import <Foundation/NSObject.h>

@class cbaseVariant, cdbProp;

@interface scopeFlagsProp : NSObject

{
    cdbProp *_cProps;
    cbaseVariant *_variant;
}

@property (retain) cdbProp *cProps;
@property (retain) cbaseVariant *variant;

- (unsigned int)propertyID;
- (int)encodeBuffer:(id)arg1 BufferOffset:(unsigned int)arg2 BytesWritten:(unsigned int *)arg3;
- (id)initWithScopeFlagsArr:(id)arg1 UseExtBTypes:(_Bool)arg2;

@end
