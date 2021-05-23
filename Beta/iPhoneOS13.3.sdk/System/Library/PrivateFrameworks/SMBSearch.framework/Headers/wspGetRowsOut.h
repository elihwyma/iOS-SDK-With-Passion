/*
 Image: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
 */

#import <Foundation/NSObject.h>

@class searchResults, wspContext, wspHeader;

@interface wspGetRowsOut : NSObject

{
    unsigned int _rowsReturned;
    wspHeader *_whdr;
    wspContext *_wctx;
    searchResults *_results;
}

@property (retain) wspHeader *whdr;
@property (retain) wspContext *wctx;
@property unsigned int rowsReturned;
@property (retain) searchResults *results;

- (id)initWithCtx:(id)arg1;
- (int)decodeBuffer:(id)arg1 BufferOffset:(unsigned int)arg2 BytesWritten:(unsigned int *)arg3;

@end
