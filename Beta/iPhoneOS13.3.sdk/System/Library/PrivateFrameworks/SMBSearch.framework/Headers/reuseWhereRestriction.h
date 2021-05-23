/*
 Image: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
 */

#import <Foundation/NSObject.h>

@interface reuseWhereRestriction : NSObject

{
    int restrictId;
    unsigned int ulType;
    unsigned int weight;
    unsigned int _resuseWhereID;
}

@property unsigned int resuseWhereID;
@property int restrictId;
@property unsigned int ulType;
@property unsigned int weight;

- (int)encodeBuffer:(id)arg1 BufferOffset:(unsigned int)arg2 BytesWritten:(unsigned int *)arg3;
- (id)initWithReuseWhereID:(unsigned int)arg1 Weight:(unsigned int)arg2;
- (int)restrictionNumber;
- (unsigned int)get_ultype;
- (unsigned int)get_weight;

@end
