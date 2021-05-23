/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

#import <Foundation/NSObject.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface SCROBrailleLineVirtualStatus : NSObject

{
    int _alignment;
    NSData *_data;
    long long _length;
    char *_cells;
}

@property (retain, nonatomic) NSData *data;
@property (nonatomic) int alignment;
@property (nonatomic) long long length;
@property (nonatomic) char *cells;

- (void)dealloc;

@end
