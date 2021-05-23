/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@class NSString;

@interface CKSyncingClientInfo : NSObject

{
    NSString *_bundleIdentifier;
    NSString *_displayName;
}

@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *bundleIdentifier;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
