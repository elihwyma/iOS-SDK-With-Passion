/*
 Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface WFImageCache : NSObject

{
    NSMutableDictionary *_imageCache;
}

@property (retain, nonatomic) NSMutableDictionary *imageCache;

+ (id)sharedImageCache;

- (id)init;
- (void)clearCache;
- (id)imageNamed:(id)arg1;
- (_Bool)_isUIKitImageName:(id)arg1;

@end
