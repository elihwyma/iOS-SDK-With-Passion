/*
 Image: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
 */

#import <NSObject.h>

@class NSMutableDictionary, NSString;

@interface IPAPreviewSizeRegistry : NSObject

{
    NSString *_name;
    NSMutableDictionary *_policies;
}

- (id)init;
- (id)description;
- (id)debugDescription;
- (id)initWithName:(id)arg1;
- (void)addPolicy:(id)arg1;
- (id)policyForStyle:(unsigned long long)arg1;
- (id)policyForStyleObject:(id)arg1;

@end
