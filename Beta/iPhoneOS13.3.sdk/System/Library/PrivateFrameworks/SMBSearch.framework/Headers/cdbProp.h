/*
 Image: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
 */

#import <Foundation/NSObject.h>

@interface cdbProp : NSObject

{
    struct network_uuid colidGuid;
    unsigned int _dbPropId;
    unsigned int _dbPropOptions;
    unsigned int _dbPropStatus;
    unsigned int _colidEKind;
    unsigned int _colidULID;
}

@property unsigned int dbPropId;
@property unsigned int dbPropOptions;
@property unsigned int dbPropStatus;
@property unsigned int colidEKind;
@property unsigned int colidULID;

- (id)initWithPropID:(unsigned int)arg1;
- (void)setTimeMidGuid;
- (int)encodeBuffer:(id)arg1 BufferOffset:(unsigned int)arg2 BytesWritten:(unsigned int *)arg3;

@end
