/*
 Image: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface cNodeRestriction : NSObject

{
    int restrictId;
    unsigned int ulType;
    unsigned int weight;
    NSMutableArray *_restrictArray;
}

@property (retain) NSMutableArray *restrictArray;
@property int restrictId;
@property unsigned int ulType;
@property unsigned int weight;

- (unsigned int)nodeCount;
- (int)encodeBuffer:(id)arg1 BufferOffset:(unsigned int)arg2 BytesWritten:(unsigned int *)arg3;
- (id)initWithType:(unsigned int)arg1 Weight:(unsigned int)arg2;
- (int)appendRestriction:(id)arg1;
- (int)restrictionNumber;
- (unsigned int)get_ultype;
- (unsigned int)get_weight;

@end
