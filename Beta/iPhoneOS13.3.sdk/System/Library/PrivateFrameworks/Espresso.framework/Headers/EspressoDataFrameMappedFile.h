/*
 Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

#import <NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface EspressoDataFrameMappedFile : NSObject

{
    int file_id;
    unsigned long long length;
    NSString *_path;
    char *_basePtr;
}

@property (retain) NSString *path;
@property char *basePtr;

- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end
