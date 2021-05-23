/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface AXAppRepresentation : NSObject

{
    int _pid;
    NSString *_bundleIdentifier;
    long long _layoutRole;
}

@property (nonatomic) int pid;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) long long layoutRole;
@property (nonatomic, readonly) _Bool isLayoutPrimary;
@property (nonatomic, readonly) _Bool isLayoutFullscreenModal;

+ (_Bool)supportsSecureCoding;
+ (id)appWithPID:(int)arg1 bundleID:(id)arg2;

- (id)init;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_commonInit;

@end
