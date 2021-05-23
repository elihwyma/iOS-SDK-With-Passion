/*
 Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

#import <HMFoundation/HMFPreference.h>

@class NSArray, NSString;

@interface HMFSystemPreference : HMFPreference

{
    NSString *_domain;
}

@property (copy, readonly) NSString *domain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, readonly) NSString *shortDescription;
@property (copy, readonly) NSString *privateDescription;
@property (copy, readonly) NSString *propertyDescription;
@property (copy, nonatomic, readonly) NSArray *attributeDescriptions;

- (id)initWithKey:(id)arg1 options:(unsigned long long)arg2 defaultValue:(id)arg3 parent:(id)arg4;
- (id)initWithKey:(id)arg1 options:(unsigned long long)arg2 domain:(id)arg3 defaultValue:(id)arg4 parent:(id)arg5;
- (id)initWithKey:(id)arg1 options:(unsigned long long)arg2 domain:(id)arg3 defaultValue:(id)arg4;

@end
