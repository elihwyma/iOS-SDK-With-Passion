/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface VUIDebugViewDataSource : NSObject

{
    NSArray *_defaultsDataSource;
}

@property (retain, nonatomic) NSArray *defaultsDataSource;

- (id)init;
- (id)_createDefaultsDataSource;

@end
