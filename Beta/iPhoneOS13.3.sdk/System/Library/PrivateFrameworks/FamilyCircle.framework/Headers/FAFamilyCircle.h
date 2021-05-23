/*
 Image: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
 */

#import <Foundation/NSObject.h>

@class FAFamilyCloudKitProperties, NSArray, NSDictionary;

@interface FAFamilyCircle : NSObject

{
    NSArray *_members;
    FAFamilyCloudKitProperties *_cloudKitProperties;
    NSDictionary *__serverResponse;
}

@property (readonly) NSDictionary *_serverResponse;
@property (readonly) NSArray *members;
@property (readonly) FAFamilyCloudKitProperties *cloudKitProperties;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithServerResponse:(id)arg1;

@end
