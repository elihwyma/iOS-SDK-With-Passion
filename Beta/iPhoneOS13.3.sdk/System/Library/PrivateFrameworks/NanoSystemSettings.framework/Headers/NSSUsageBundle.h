/*
 Image: /System/Library/PrivateFrameworks/NanoSystemSettings.framework/NanoSystemSettings
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface NSSUsageBundle : NSObject

{
    _Bool _purgeable;
    NSString *_name;
    NSString *_bundleIdentifier;
    NSArray *_categories;
    unsigned long long _totalSize;
}

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSArray *categories;
@property (nonatomic) unsigned long long totalSize;
@property (nonatomic, getter=isPurgeable) _Bool purgeable;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
