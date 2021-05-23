/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface IMImageSource : NSObject

{
    struct CGImageSource *_imageSourceRef;
    NSURL *_fileURL;
}

@property (nonatomic, readonly) _Bool fileExists;
@property (nonatomic, readonly) struct CGImageSource *imageSourceRef;
@property (nonatomic, readonly) NSURL *fileURL;
@property (nonatomic, readonly) NSString *filePath;

- (void)dealloc;
- (id)initWithFileURL:(id)arg1;

@end
