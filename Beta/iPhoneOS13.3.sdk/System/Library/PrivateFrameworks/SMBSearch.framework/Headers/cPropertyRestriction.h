/*
 Image: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
 */

#import <Foundation/NSObject.h>

@class cbaseVariant, fullPropSpec;

@interface cPropertyRestriction : NSObject

{
    int restrictId;
    unsigned int ulType;
    unsigned int weight;
    unsigned int _relOp;
    unsigned int _lcid;
    fullPropSpec *_propSpec;
    cbaseVariant *_prVal;
}

@property unsigned int relOp;
@property (retain) fullPropSpec *propSpec;
@property (retain) cbaseVariant *prVal;
@property unsigned int lcid;
@property int restrictId;
@property unsigned int ulType;
@property unsigned int weight;

- (int)encodeBuffer:(id)arg1 BufferOffset:(unsigned int)arg2 BytesWritten:(unsigned int *)arg3;
- (id)initWithRelop:(unsigned int)arg1 Weight:(unsigned int)arg2;
- (int)restrictionNumber;
- (unsigned int)get_ultype;
- (unsigned int)get_weight;

@end
