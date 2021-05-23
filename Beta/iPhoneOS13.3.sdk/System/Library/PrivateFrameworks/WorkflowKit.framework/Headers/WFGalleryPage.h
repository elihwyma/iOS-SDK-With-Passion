/*
 Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
 */

#import <Foundation/NSObject.h>

@class CKRecordID, NSArray, NSNumber, NSString;

@interface WFGalleryPage : NSObject

{
    CKRecordID *_identifier;
    NSString *_name;
    NSNumber *_minVersion;
    NSNumber *_isRoot;
    NSArray *_banners;
    NSArray *_collections;
    NSArray *_routines;
    NSArray *_donations;
    NSArray *_donationsGroupedByApp;
    NSString *_language;
    CKRecordID *_base;
    NSString *_persistentIdentifier;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSNumber *minVersion;
@property (nonatomic, readonly) NSNumber *isRoot;
@property (nonatomic, readonly) NSArray *banners;
@property (nonatomic, readonly) NSArray *collections;
@property (nonatomic, readonly) NSArray *routines;
@property (nonatomic, readonly) NSArray *donations;
@property (nonatomic, readonly) NSArray *donationsGroupedByApp;
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

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)referenceActionForKey:(id)arg1;
- (id)subPageMatchingName:(id)arg1;
- (id)subPageWithIdentifier:(id)arg1;

@end
