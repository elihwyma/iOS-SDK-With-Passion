/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskRequest.h>

@class DMFControlGroupIdentifier, NSArray, NSData, NSString;

@interface CRKDownloadResourcesRequest : CATTaskRequest

{
    _Bool _openAfterDownloadCompletes;
    DMFControlGroupIdentifier *_courseIdentifier;
    NSArray *_resources;
    NSString *_resourcesDescription;
    NSData *_previewImageData;
    NSString *_sourceBundleIdentifier;
}

@property (copy, nonatomic) DMFControlGroupIdentifier *courseIdentifier;
@property (copy, nonatomic) NSArray *resources;
@property (copy, nonatomic) NSString *resourcesDescription;
@property (retain, nonatomic) NSData *previewImageData;
@property (nonatomic) _Bool openAfterDownloadCompletes;
@property (copy, nonatomic) NSString *sourceBundleIdentifier;

+ (_Bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
