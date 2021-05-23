/*
 Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

#import <UIKit/UIView.h>

__attribute__((visibility("hidden")))
@interface WKEmbeddedView : UIView

{
    unsigned long long _embeddedViewID;
}

@property (nonatomic, readonly) unsigned long long embeddedViewID;

- (id)initWithEmbeddedViewID:(unsigned long long)arg1;

@end
