/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, UIImage;

__attribute__((visibility("hidden")))
@interface _UICalloutBarSystemButtonDescription : NSObject

{
    NSString *m_title;
    UIImage *m_image;
    SEL m_action;
    int m_type;
    CDUnknownBlockType m_configurationBlock;
}

@property (nonatomic, readonly) SEL action;
@property (copy, nonatomic) CDUnknownBlockType configurationBlock;

+ (id)buttonDescriptionWithTitle:(id)arg1 action:(SEL)arg2 type:(int)arg3;
+ (id)buttonDescriptionWithImage:(id)arg1 action:(SEL)arg2 type:(int)arg3;

- (id)initWithTitle:(id)arg1 orImage:(id)arg2 action:(SEL)arg3 type:(int)arg4;
- (id)materializeButtonInView:(id)arg1;

@end
