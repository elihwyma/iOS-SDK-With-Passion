/*
 Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

#import <Foundation/NSObject.h>

@protocol SFResourceLoader;

__attribute__((visibility("hidden")))
@interface WeakLoader : NSObject

{
    id <SFResourceLoader> _weakLoader;
}

@property (nonatomic, readonly) id <SFResourceLoader> strongloader;

- (id)initWithLoader:(id)arg1;

@end
