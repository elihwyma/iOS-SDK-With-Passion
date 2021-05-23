/*
 Image: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
 */

#import <Foundation/NSObject.h>

@interface fullPropSpec : NSObject

{
    struct network_uuid propGuid;
    int _propNumber;
    unsigned int _ulKind;
    unsigned int _propID;
}

@property int propNumber;
@property unsigned int ulKind;
@property unsigned int propID;

- (int)encodeBuffer:(id)arg1 BufferOffset:(unsigned int)arg2 BytesWritten:(unsigned int *)arg3;
- (id)initWithPropertyNumber:(int)arg1;

@end
