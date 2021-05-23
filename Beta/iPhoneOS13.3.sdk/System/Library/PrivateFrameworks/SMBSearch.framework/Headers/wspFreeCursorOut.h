/*
 Image: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
 */

#import <Foundation/NSObject.h>

@class wspHeader;

@interface wspFreeCursorOut : NSObject

{
    unsigned int _cursorsRemaining;
    wspHeader *_whdr;
}

@property (retain) wspHeader *whdr;
@property unsigned int cursorsRemaining;

- (id)init;
- (int)decodeBuffer:(id)arg1 BufferOffset:(unsigned int)arg2 BytesDecoded:(unsigned int *)arg3;

@end
