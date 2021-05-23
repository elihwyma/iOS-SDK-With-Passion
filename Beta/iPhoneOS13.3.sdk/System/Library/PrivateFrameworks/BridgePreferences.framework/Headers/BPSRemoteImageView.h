/*
 Image: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
 */

#import <UIKit/UIImageView.h>

@class NSString;

@interface BPSRemoteImageView : UIImageView

{
    NSString *_desiredImageName;
    NSString *_fallbackImageName;
}

@property (copy, nonatomic) NSString *desiredImageName;
@property (copy, nonatomic) NSString *fallbackImageName;

- (id)init;
- (void)dealloc;
- (void)updateImagesWithAnimation:(_Bool)arg1;

@end
