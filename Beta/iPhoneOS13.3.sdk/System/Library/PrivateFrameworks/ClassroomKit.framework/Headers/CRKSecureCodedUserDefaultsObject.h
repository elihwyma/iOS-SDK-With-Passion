/*
 Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

#import <ClassroomKit/CRKUserDefaultsObject.h>

@class NSSet;

@interface CRKSecureCodedUserDefaultsObject : CRKUserDefaultsObject

{
    NSSet *_classes;
}

@property (copy, nonatomic, readonly) NSSet *classes;

- (id)value;
- (void)setValue:(id)arg1;
- (id)valueWithError:(id *)arg1;
- (id)initWithKey:(id)arg1 classes:(id)arg2;
- (void)registerDefaultValue:(id)arg1;
- (id)initWithStore:(id)arg1 key:(id)arg2 classes:(id)arg3;
- (_Bool)setValue:(id)arg1 error:(id *)arg2;
- (id)initWithDefaults:(id)arg1 key:(id)arg2 classes:(id)arg3;

@end
