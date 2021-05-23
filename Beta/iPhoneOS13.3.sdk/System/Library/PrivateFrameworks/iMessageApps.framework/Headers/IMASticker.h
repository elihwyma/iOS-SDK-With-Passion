/*
 Image: /System/Library/PrivateFrameworks/iMessageApps.framework/iMessageApps
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface IMASticker : NSObject

{
    NSURL *_fileURL;
    NSString *_stickerName;
    NSString *_accessibilityLabel;
}

@property (copy, nonatomic, readonly) NSURL *fileURL;
@property (copy, nonatomic, readonly) NSString *stickerName;
@property (copy, nonatomic, readonly) NSString *accessibilityLabel;

+ (double)screenScale;

- (id)initWithFileURL:(id)arg1 stickerName:(id)arg2 accessibilityLabel:(id)arg3;

@end
