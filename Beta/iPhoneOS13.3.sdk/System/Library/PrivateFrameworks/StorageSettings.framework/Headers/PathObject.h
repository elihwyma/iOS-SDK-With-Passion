/*
 Image: /System/Library/PrivateFrameworks/StorageSettings.framework/StorageSettings
 */

#import <Foundation/NSObject.h>

@interface PathObject : NSObject

{
    int _len;
    char *_path;
}

@property (readonly) char *path;
@property (readonly) int len;

+ (id)pathObjectWithPath:(const char *)arg1 component:(const char *)arg2;

- (void)dealloc;
- (id)description;
- (id)initWithPath:(const char *)arg1 component:(const char *)arg2;

@end
