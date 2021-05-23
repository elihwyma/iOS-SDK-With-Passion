/*
 Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import <NSObject.h>

__attribute__((visibility("hidden")))
@interface QLAppearance : NSObject

{
    double _topInset;
    double _bottomInset;
    unsigned long long _presentationMode;
    struct UIEdgeInsets _peripheryInsets;
}

@property (readonly) double topInset;
@property (readonly) double bottomInset;
@property (readonly) unsigned long long presentationMode;
@property (readonly) struct UIEdgeInsets peripheryInsets;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTopInset:(double)arg1 bottomInset:(double)arg2 presentationMode:(unsigned long long)arg3 peripheryInsets:(struct UIEdgeInsets)arg4;

@end
