/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIImage;

@interface UIMenuElement : NSObject <Swift>

{
    NSString *_title;
    UIImage *_image;
}

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) UIImage *image;

+ (_Bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_setTitle:(id)arg1;
- (id)initWithTitle:(id)arg1 image:(id)arg2;
- (id)_immutableCopy;
- (void)_acceptMenuVisit:(CDUnknownBlockType)arg1 commandVisit:(CDUnknownBlockType)arg2 actionVisit:(CDUnknownBlockType)arg3;
- (_Bool)_acceptBoolMenuVisit:(CDUnknownBlockType)arg1 commandVisit:(CDUnknownBlockType)arg2 actionVisit:(CDUnknownBlockType)arg3;
- (void)_acceptMenuVisit:(CDUnknownBlockType)arg1 leafVisit:(CDUnknownBlockType)arg2;
- (_Bool)_acceptBoolMenuVisit:(CDUnknownBlockType)arg1 leafVisit:(CDUnknownBlockType)arg2;
- (void)_setImage:(id)arg1;

@end
