/*
 Image: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
 */

#import <Foundation/NSObject.h>

@class IKImageElement, IKViewElement, NSArray, NSString, UIColor;

__attribute__((visibility("hidden")))
@interface VUIPopoverDescriptor : NSObject

{
    IKImageElement *_imageElement;
    IKViewElement *_buttonElement;
    IKViewElement *_popoverElement;
    UIColor *_tintColor;
    NSString *_title;
    unsigned long long _type;
    NSArray *_popoverEntries;
    struct CGSize _popoverSize;
}

@property (nonatomic, readonly) IKViewElement *buttonElement;
@property (nonatomic, readonly) IKViewElement *popoverElement;
@property (nonatomic, readonly) struct CGSize popoverSize;
@property (nonatomic, readonly) UIColor *tintColor;
@property (copy, nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) unsigned long long type;
@property (copy, nonatomic, readonly) NSArray *popoverEntries;

- (id)init;
- (id)_init;
- (id)initWithViewElement:(id)arg1;
- (void)_populateWithElement:(id)arg1;

@end
