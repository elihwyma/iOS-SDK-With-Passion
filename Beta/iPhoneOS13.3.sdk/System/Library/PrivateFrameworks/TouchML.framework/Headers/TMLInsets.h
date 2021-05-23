/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <NSObject.h>

@interface TMLInsets : NSObject

{
    struct UIEdgeInsets _insets;
}

@property (nonatomic, readonly) double top;
@property (nonatomic, readonly) double left;
@property (nonatomic, readonly) double bottom;
@property (nonatomic, readonly) double right;

+ (void)initializeJSContext:(id)arg1;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)UIEdgeInsetsValue;
- (id)initWithInsets:(struct UIEdgeInsets)arg1;
- (struct UIEdgeInsets)UIEdgeInsets;

@end
