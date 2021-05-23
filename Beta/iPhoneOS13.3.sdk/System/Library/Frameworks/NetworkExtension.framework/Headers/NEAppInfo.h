/*
 Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

#import <Foundation/NSObject.h>

@class NSData, NSString, NSUUID;

@interface NEAppInfo : NSObject

{
    int _pid;
    NSUUID *_uuid;
    NSString *_bundleID;
    NSString *_appVersion;
    NSData *_cdHash;
}

@property (nonatomic) int pid;
@property (copy, nonatomic) NSUUID *uuid;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSData *cdHash;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isComplete;

@end
