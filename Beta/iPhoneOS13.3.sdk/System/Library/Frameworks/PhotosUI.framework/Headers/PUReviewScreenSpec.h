/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface PUReviewScreenSpec : NSObject

{
    _Bool _allowSendButton;
    unsigned long long _options;
    unsigned long long _oneUpOptions;
}

@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) unsigned long long oneUpOptions;
@property (nonatomic, readonly) _Bool allowSendButton;

- (id)initWithOptions:(unsigned long long)arg1;

@end
