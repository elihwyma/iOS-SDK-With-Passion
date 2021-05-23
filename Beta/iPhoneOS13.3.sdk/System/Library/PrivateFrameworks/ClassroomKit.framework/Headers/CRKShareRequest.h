/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskRequest.h>

@class DMFControlGroupIdentifier, NSArray, NSData, NSDictionary, NSString;

@interface CRKShareRequest : CATTaskRequest

{
    DMFControlGroupIdentifier *_courseIdentifier;
    NSString *_targetType;
    NSString *_targetIdentifier;
    NSArray *_urls;
    NSString *_shareDescription;
    NSData *_previewImageData;
    NSDictionary *_sandboxExtensions;
    NSString *_sourceBundleIdentifier;
}

@property (copy, nonatomic) DMFControlGroupIdentifier *courseIdentifier;
@property (copy, nonatomic) NSString *targetType;
@property (copy, nonatomic) NSString *targetIdentifier;
@property (copy, nonatomic) NSArray *urls;
@property (copy, nonatomic) NSString *shareDescription;
@property (retain, nonatomic) NSData *previewImageData;
@property (retain, nonatomic) NSDictionary *sandboxExtensions;
@property (copy, nonatomic) NSString *sourceBundleIdentifier;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
