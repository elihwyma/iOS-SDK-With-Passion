/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUIProductBadgeResource : NSObject

{
    _Bool _templated;
    NSString *_name;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic, getter=isTemplated) _Bool templated;

- (id)init;

@end
