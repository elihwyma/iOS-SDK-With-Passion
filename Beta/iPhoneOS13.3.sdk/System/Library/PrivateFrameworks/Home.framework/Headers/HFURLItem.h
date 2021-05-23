/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Home/HFItem.h>

@class NSString, NSURL;

@interface HFURLItem : HFItem

{
    NSURL *_URL;
    NSString *_title;
}

@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *title;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithTitle:(id)arg1 URL:(id)arg2;

@end
