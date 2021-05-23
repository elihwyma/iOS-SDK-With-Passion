/*
 Image: /System/Library/PrivateFrameworks/NanoSystemSettings.framework/NanoSystemSettings
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface NSSUsageBundleCategory : NSObject

{
    NSString *_name;
    unsigned long long _size;
}

@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned long long size;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
