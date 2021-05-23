/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIWebFileUploadItem : NSObject

{
    NSString *_filePath;
}

@property (retain, nonatomic) NSString *filePath;

- (void)dealloc;
- (id)initWithFilePath:(id)arg1;
- (id)displayImage;
- (_Bool)isVideo;

@end
