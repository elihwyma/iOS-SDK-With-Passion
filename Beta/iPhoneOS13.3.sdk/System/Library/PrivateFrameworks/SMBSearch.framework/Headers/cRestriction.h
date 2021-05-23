/*
 Image: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
 */

#import <Foundation/NSObject.h>

@protocol RestrictionProtocol;

@interface cRestriction : NSObject

{
    int restrictId;
    unsigned int ulType;
    unsigned int weight;
    NSObject<RestrictionProtocol> *_restrictionObj;
}

@property (retain) NSObject<RestrictionProtocol> *restrictionObj;
@property int restrictId;
@property unsigned int ulType;
@property unsigned int weight;

- (void)setRestriction:(id)arg1;
- (int)encodeBuffer:(id)arg1 BufferOffset:(unsigned int)arg2 BytesWritten:(unsigned int *)arg3;
- (id)initWithType:(unsigned int)arg1 Weight:(unsigned int)arg2;

@end
