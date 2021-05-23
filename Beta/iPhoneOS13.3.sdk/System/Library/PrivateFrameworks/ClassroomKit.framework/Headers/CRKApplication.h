/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface CRKApplication : NSObject

{
    NSString *_bundleIdentifier;
    NSString *_name;
    NSData *_iconData;
    NSData *_badgeIconData;
    NSString *_shortVersionString;
}

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSData *iconData;
@property (retain, nonatomic) NSData *badgeIconData;
@property (copy, nonatomic) NSString *shortVersionString;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInstalledApplication:(id)arg1;

@end
