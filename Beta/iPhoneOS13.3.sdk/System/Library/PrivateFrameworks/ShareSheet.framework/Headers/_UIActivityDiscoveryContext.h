/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface _UIActivityDiscoveryContext : NSObject

{
    NSArray *_activityItemValueExtensionMatchingDictionaries;
}

@property (retain, nonatomic) NSArray *activityItemValueExtensionMatchingDictionaries;

+ (_Bool)supportsSecureCoding;
+ (id)contextFromExtensionItem:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)newExtensionItem;

@end
