/*
 Image: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
 */

#import <Foundation/NSObject.h>

@protocol RestrictionProtocol;

@interface cCoercionRestriction : NSObject

{
    int restrictId;
    unsigned int ulType;
    unsigned int weight;
    int _cop;
    unsigned int _fValue;
    NSObject<RestrictionProtocol> *_restrictionObj;
}

@property int cop;
@property unsigned int fValue;
@property (retain) NSObject<RestrictionProtocol> *restrictionObj;
@property int restrictId;
@property unsigned int ulType;
@property unsigned int weight;

- (void)setRestriction:(id)arg1;
- (int)encodeBuffer:(id)arg1 BufferOffset:(unsigned int)arg2 BytesWritten:(unsigned int *)arg3;
- (id)initWithOp:(int)arg1 FValue:(unsigned int)arg2 Weight:(unsigned int)arg3;
- (int)restrictionNumber;
- (unsigned int)get_ultype;
- (unsigned int)get_weight;

@end
