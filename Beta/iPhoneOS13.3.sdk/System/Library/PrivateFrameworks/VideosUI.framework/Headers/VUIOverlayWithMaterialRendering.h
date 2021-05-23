/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUIOverlayWithMaterialRendering : NSObject

{
    NSString *_identifier;
    struct CGRect _rect;
}

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) struct CGRect rect;

- (id)init;
- (id)initWithIdentifier:(id)arg1 rect:(struct CGRect)arg2;

@end
