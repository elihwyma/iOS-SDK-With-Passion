/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <CATTaskResultObject.h>

@class NSArray;

@interface CRKDownloadResourcesResultObject : CATTaskResultObject

{
    NSArray *_resourceFileURLs;
}

@property (retain, nonatomic) NSArray *resourceFileURLs;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
