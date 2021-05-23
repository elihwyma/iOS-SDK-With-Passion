/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class AVMediaDataStorageInternal;

@interface AVMediaDataStorage : NSObject

{
    AVMediaDataStorageInternal *_mediaDataStorageInternal;
}

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)URL;
- (id)initWithURL:(id)arg1 options:(id)arg2;

@end
