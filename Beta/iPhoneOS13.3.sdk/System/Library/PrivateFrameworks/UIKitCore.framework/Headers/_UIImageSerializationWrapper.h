/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface _UIImageSerializationWrapper : NSObject <Swift>

{
    UIImage *_image;
}

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (Class)classForCoder;
- (id)initWithImage:(id)arg1;

@end
