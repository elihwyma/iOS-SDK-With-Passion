/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <Foundation/NSObject.h>

@protocol CRKCloudStoring;

@interface CRKCloudTuple : NSObject

{
    id <CRKCloudStoring> _originalObject;
    id <CRKCloudStoring> _changedObject;
}

@property (nonatomic, readonly) id <CRKCloudStoring> originalObject;
@property (nonatomic, readonly) id <CRKCloudStoring> changedObject;

+ (id)new;

- (id)init;
- (id)initWithChangedObject:(id)arg1 originalObject:(id)arg2;

@end
