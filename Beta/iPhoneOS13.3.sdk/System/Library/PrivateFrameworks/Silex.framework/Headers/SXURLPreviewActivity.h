/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@protocol SXURLPreviewing;

@interface SXURLPreviewActivity : NSObject

{
    id <SXURLPreviewing> _URLPreviewing;
    NSURL *_URL;
}

@property (nonatomic, readonly) id <SXURLPreviewing> URLPreviewing;
@property (nonatomic, readonly) NSURL *URL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)previewViewControllerForAction:(id)arg1;
- (void)commitViewController:(id)arg1 action:(id)arg2;
- (id)initWithURLPreviewing:(id)arg1 URL:(id)arg2;

@end
