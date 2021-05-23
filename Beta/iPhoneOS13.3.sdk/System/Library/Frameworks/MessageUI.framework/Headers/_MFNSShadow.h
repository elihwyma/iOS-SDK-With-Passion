/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <Foundation/NSObject.h>

@class NSShadow;

@interface _MFNSShadow : NSObject

{
    NSShadow *_shadow;
}

@property (retain, nonatomic) NSShadow *shadow;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithShadow:(id)arg1;

@end
