/*
 Image: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
 */

#import <Foundation/NSObject.h>

@class wspHeader;

@interface wspQueryOut : NSObject

{
    unsigned int _trueSequential;
    unsigned int _workID;
    unsigned int _cursor;
    wspHeader *_whdr;
}

@property (retain) wspHeader *whdr;
@property unsigned int trueSequential;
@property unsigned int workID;
@property unsigned int cursor;

- (id)init;
- (int)decodeBuffer:(id)arg1 BufferOffset:(unsigned int)arg2 BytesDecoded:(unsigned int *)arg3;

@end
