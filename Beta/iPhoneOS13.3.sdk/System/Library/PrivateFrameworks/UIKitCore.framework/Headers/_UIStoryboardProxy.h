/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class UIStoryboard;

__attribute__((visibility("hidden")))
@interface _UIStoryboardProxy : NSObject <Swift>

{
    UIStoryboard *_storyboard;
}

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStoryboard:(id)arg1;

@end
