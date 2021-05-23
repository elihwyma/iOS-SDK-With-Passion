/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface _UIDICPreviewItem : NSObject

{
    NSURL *_URL;
    NSURL *_previewURLOverride;
    NSString *_name;
    NSURL *_URLsToDeleteOnDealloc;
    NSString *_previewItemContentType;
    NSURL *_URLToDeleteOnDealloc;
    NSURL *_previewItemURLForDisplay;
}

@property (retain, nonatomic) NSURL *previewItemURL;
@property (retain, nonatomic) NSURL *previewItemURLOverride;
@property (retain, nonatomic) NSURL *previewItemURLForDisplay;
@property (retain, nonatomic) NSString *previewItemTitle;
@property (retain, nonatomic) NSString *previewItemContentType;
@property (retain, nonatomic) NSURL *URLToDeleteOnDealloc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)dealloc;
- (id)_primitive_previewItemContentType;

@end
