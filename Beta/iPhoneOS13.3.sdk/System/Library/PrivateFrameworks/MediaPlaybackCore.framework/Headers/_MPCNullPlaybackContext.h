/*
 Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

#import <MediaPlayer/MPPlaybackContext.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _MPCNullPlaybackContext : MPPlaybackContext

{
    NSString *_label;
}

@property (copy, nonatomic) NSString *label;

+ (_Bool)supportsSecureCoding;
+ (Class)queueFeederClass;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)descriptionComponents;

@end
