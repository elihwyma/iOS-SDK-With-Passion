/*
 Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface _IMLogFileCompressor : NSObject

{
    NSMutableArray *_archivers;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)fileCopierDidStart:(id)arg1;
- (void)fileCopierDidFinish:(id)arg1;
- (void)compressPath:(id)arg1 toPath:(id)arg2;

@end
