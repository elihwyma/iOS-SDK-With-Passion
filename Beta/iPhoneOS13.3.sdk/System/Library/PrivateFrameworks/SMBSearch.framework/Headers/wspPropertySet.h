/*
 Image: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface wspPropertySet : NSObject

{
    struct network_uuid propSetGuid;
    int _propsetID;
    NSMutableArray *_propArr;
}

@property int propsetID;
@property (retain) NSMutableArray *propArr;

- (void)addProperty:(id)arg1;
- (unsigned long long)propertyCount;
- (int)encodeBuffer:(id)arg1 BufferOffset:(unsigned int)arg2 BytesWritten:(unsigned int *)arg3;
- (id)initWithPropSetID:(int)arg1;
- (id)propertyForPropID:(unsigned int)arg1;

@end
