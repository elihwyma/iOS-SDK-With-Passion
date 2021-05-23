/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSString, UIBarButtonItem, UIView;

@interface _SFUIViewPopoverSourceInfo : NSObject

{
    UIView *_view;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) struct CGRect popoverSourceRect;
@property (nonatomic, readonly) UIView *popoverSourceView;
@property (nonatomic, readonly) UIBarButtonItem *barButtonItem;

- (id)initWithView:(id)arg1;

@end
