/*
 Image: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
 */

#import <Foundation/NSObject.h>

@class CLKUIAtlas, MISSING_TYPE, NSString;

@interface CLKUITexture : NSObject

{
    CLKUIAtlas *_atlas;
    MISSING_TYPE *_rect;
}

@property (nonatomic, readonly) NSString *uuid;
@property (nonatomic, readonly) CLKUIAtlas *atlas;
@property (nonatomic, readonly) unsigned long long status;
@property (nonatomic, readonly) MISSING_TYPE *rect;

+ (id)textureWithProviderDelegate:(id)arg1 uuid:(id)arg2 rect: /* Error: Ran out of types for this method. */;
+ (id)textureWithProviderDelegate:(id)arg1 uuid:(id)arg2;

- (void)dealloc;
- (id)initWithAtlas:(id)arg1 rect: /* Error: Ran out of types for this method. */;

@end
