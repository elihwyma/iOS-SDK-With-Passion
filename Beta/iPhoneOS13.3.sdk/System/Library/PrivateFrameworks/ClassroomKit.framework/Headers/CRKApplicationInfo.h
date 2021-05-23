/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface CRKApplicationInfo : NSObject

{
    NSString *_bundleIdentifier;
    NSString *_shortVersionString;
}

@property (copy, nonatomic, readonly) NSString *bundleIdentifier;
@property (copy, nonatomic, readonly) NSString *shortVersionString;
@property (copy, nonatomic, readonly) NSDictionary *dictionaryRepresentation;

+ (id)bundleIdentifiersFromDictionaryRepresentations:(id)arg1;
+ (id)bundleIdentifierFromDictionaryRepresentation:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithBundleIdentifier:(id)arg1 shortVersionString:(id)arg2;

@end
