/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <UIKit/UIPreviewAction.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WKPreviewAction : UIPreviewAction

{
    NSString *_identifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *identifier;

+ (id)actionWithIdentifier:(id)arg1 title:(id)arg2 style:(long long)arg3 handler:(CDUnknownBlockType)arg4;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
