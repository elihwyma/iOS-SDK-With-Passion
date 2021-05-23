/*
 Image: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface _PASPosixDataCollector : NSObject

{
    NSMutableArray *_chunks;
    unsigned long long _totalBytes;
}

@property (nonatomic, readonly) CDUnknownBlockType handleData;

- (id)allData;

@end
