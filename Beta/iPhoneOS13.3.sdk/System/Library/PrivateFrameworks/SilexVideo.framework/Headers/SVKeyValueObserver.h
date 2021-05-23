/*
 Image: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SVKeyValueObserver : NSObject

{
    NSString *_keyPath;
    NSObject *_object;
    unsigned long long _options;
    CDUnknownBlockType _change;
}

@property (copy, nonatomic, readonly) NSString *keyPath;
@property (weak, nonatomic, readonly) NSObject *object;
@property (nonatomic, readonly) unsigned long long options;
@property (copy, nonatomic, readonly) CDUnknownBlockType change;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithKeyPath:(id)arg1 ofObject:(id)arg2 withOptions:(unsigned long long)arg3 change:(CDUnknownBlockType)arg4;

@end
