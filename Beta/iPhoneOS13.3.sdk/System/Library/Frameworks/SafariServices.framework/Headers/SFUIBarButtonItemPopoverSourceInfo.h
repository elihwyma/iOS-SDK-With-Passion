/*
 Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

#import <Foundation/NSObject.h>

@class NSString, UIBarButtonItem, UIView;

__attribute__((visibility("hidden")))
@interface SFUIBarButtonItemPopoverSourceInfo : NSObject

{
    UIBarButtonItem *_item;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) struct CGRect popoverSourceRect;
@property (nonatomic, readonly) UIView *popoverSourceView;
@property (nonatomic, readonly) UIBarButtonItem *barButtonItem;

- (id)initWithItem:(id)arg1;

@end
