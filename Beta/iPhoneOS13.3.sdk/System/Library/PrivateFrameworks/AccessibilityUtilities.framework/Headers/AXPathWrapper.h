/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@interface AXPathWrapper : NSObject

{
    struct CGPath *_path;
}

@property (nonatomic) struct CGPath *path;

+ (_Bool)supportsSecureCoding;
+ (id)currentSharedInstance;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
