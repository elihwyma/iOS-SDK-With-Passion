/*
 Image: /System/Library/PrivateFrameworks/TVUIKit.framework/TVUIKit
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _TVContentRatingBadgeDescriptor : NSObject

{
    _Bool _templatedImage;
    NSString *_resourceName;
}

@property (copy, nonatomic, readonly) NSString *resourceName;
@property (nonatomic, readonly, getter=isTemplatedImage) _Bool templatedImage;

- (id)initWithResourceName:(id)arg1 isTemplatedImage:(_Bool)arg2;

@end
