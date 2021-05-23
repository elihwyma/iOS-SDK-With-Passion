/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface UICreatePDFActivityItem : NSObject

{
    NSURL *_previewItemURL;
    NSString *_previewItemTitle;
}

@property (retain, nonatomic) NSURL *previewItemURL;
@property (retain, nonatomic) NSString *previewItemTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

@end
