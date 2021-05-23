/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _CarTitleAlternative : NSObject

{
    NSString *_title;
    double _width;
}

@property (copy, nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) double width;

+ (id)alternativeWithTitle:(id)arg1 label:(id)arg2;

- (id)description;
- (void)updateWithLabel:(id)arg1;

@end
