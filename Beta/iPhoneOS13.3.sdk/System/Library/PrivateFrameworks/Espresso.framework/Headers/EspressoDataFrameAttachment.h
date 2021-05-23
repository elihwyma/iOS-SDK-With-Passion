/*
 Image: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
 */

#import <NSObject.h>

@class NSString;

@interface EspressoDataFrameAttachment : NSObject

{
    _Bool _disabled;
    NSString *_filePath;
    void *_rawPointer;
    unsigned long long _offset;
    unsigned long long _size;
}

@property (retain) NSString *filePath;
@property void *rawPointer;
@property unsigned long long offset;
@property unsigned long long size;
@property _Bool disabled;

+ (id)fromDict:(id)arg1 frameStorage:(id)arg2;

- (void)loadFromDict:(id)arg1 frameStorage:(id)arg2;

@end
