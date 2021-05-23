/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface SXQuickLookFile : NSObject

{
    NSURL *_fileURL;
    NSString *_title;
    NSURL *_shareURL;
}

@property (nonatomic, readonly) NSURL *fileURL;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSURL *shareURL;

- (id)previewItemTitle;
- (id)previewItemURL;
- (id)initWithFileURL:(id)arg1 shareURL:(id)arg2;
- (id)initWithFileURL:(id)arg1 title:(id)arg2 shareURL:(id)arg3;

@end
