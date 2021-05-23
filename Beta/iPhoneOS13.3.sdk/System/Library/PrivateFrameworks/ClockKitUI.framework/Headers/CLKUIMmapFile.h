/*
 Image: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CLKUIMmapFile : NSObject

{
    int _descriptor;
    NSString *_path;
    unsigned long long _length;
    const void *_bytes;
}

@property (nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) int descriptor;
@property (nonatomic, readonly) unsigned long long length;
@property (nonatomic, readonly) const void *bytes;

+ (id)mmapFileWithPath:(id)arg1;

- (void)dealloc;
- (id)initWithPath:(id)arg1 descriptor:(int)arg2 length:(unsigned long long)arg3 bytes:(const void *)arg4;

@end
