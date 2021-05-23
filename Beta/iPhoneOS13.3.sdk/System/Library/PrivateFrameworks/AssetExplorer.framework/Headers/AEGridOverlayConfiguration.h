/*
 Image: /System/Library/PrivateFrameworks/AssetExplorer.framework/AssetExplorer
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface AEGridOverlayConfiguration : NSObject

{
    _Bool _showVideoDecoration;
    _Bool _showCloudDecoration;
    _Bool _showLoopDecoration;
}

@property (nonatomic, readonly) _Bool showVideoDecoration;
@property (nonatomic, readonly) _Bool showCloudDecoration;
@property (nonatomic, readonly) _Bool showLoopDecoration;

- (_Bool)isEqual:(id)arg1;
- (id)initWithShowCloudDecoration:(_Bool)arg1 showVideoDecoration:(_Bool)arg2 showLoopDecoration:(_Bool)arg3;

@end
