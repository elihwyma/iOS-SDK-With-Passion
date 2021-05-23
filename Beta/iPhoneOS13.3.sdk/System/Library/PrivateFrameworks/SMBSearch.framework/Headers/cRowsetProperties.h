/*
 Image: /System/Library/PrivateFrameworks/SMBSearch.framework/SMBSearch
 */

#import <Foundation/NSObject.h>

@interface cRowsetProperties : NSObject

{
    unsigned int _booleanOptions;
    unsigned int _maxOpenRows;
    unsigned int _memoryUsage;
    unsigned int _maxResult;
    unsigned int _cmdTimeout;
}

@property unsigned int booleanOptions;
@property unsigned int maxOpenRows;
@property unsigned int memoryUsage;
@property unsigned int maxResult;
@property unsigned int cmdTimeout;

- (id)init;
- (int)encodeBuffer:(id)arg1 BufferOffset:(unsigned int)arg2 BytesWritten:(unsigned int *)arg3;

@end
