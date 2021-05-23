/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString, UIView;

__attribute__((visibility("hidden")))
@interface UIKBAutoFillTestTableViewHeaderFooterData : NSObject <Swift>

{
    NSString *_title;
    UIView *_headerFooterView;
    double _height;
}

@property (copy, nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) UIView *headerFooterView;
@property (nonatomic, readonly) double height;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 view:(id)arg2 height:(double)arg3;

@end
