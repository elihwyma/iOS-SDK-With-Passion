/*
 Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

#import <NSObject.h>

@class NSDictionary, NSNumber, NSString;

@interface SSVGratisApplication : NSObject

{
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    NSNumber *_externalVersionIdentifier;
    NSString *_itemIdentifier;
}

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *bundleVersion;
@property (copy, nonatomic) NSNumber *externalVersionIdentifier;
@property (copy, nonatomic) NSString *itemIdentifier;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
