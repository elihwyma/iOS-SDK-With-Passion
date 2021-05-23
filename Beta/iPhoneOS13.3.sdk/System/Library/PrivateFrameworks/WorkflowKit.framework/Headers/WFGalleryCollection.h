/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class CKRecordID, NSArray, NSDate, NSString;

@interface WFGalleryCollection : NSObject

{
    CKRecordID *_identifier;
    NSString *_name;
    NSString *_collectionDescription;
    NSArray *_workflows;
    NSDate *_modifiedAt;
    NSString *_language;
    CKRecordID *_base;
    NSString *_persistentIdentifier;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *collectionDescription;
@property (nonatomic, readonly) NSArray *workflows;
@property (nonatomic, readonly) NSDate *modifiedAt;
@property (nonatomic, readonly) NSString *language;
@property (nonatomic, readonly) CKRecordID *base;
@property (nonatomic, readonly) NSString *persistentIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) CKRecordID *identifier;

+ (id)properties;
+ (id)recordType;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)referenceActionForKey:(id)arg1;
- (void)setCreatedAt:(id)arg1 modifiedAt:(id)arg2 createdBy:(id)arg3;

@end
