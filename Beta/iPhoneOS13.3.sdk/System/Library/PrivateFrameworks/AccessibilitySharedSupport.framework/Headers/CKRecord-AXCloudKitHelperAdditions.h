/*
 Image: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
 */

#import <CloudKit/CKRecord.h>

@class NSArray, NSNumber, NSString, NSUUID;

@interface CKRecord (AXCloudKitHelperAdditions)

@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSNumber *version;
@property (retain, nonatomic) NSString *basePunctuationGroup;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *entries;
@property (retain, nonatomic) NSString *replacement;
@property (retain, nonatomic) NSString *rule;
@property (retain, nonatomic) NSString *punctuation;
@property (retain, nonatomic) NSUUID *groupUUID;

@end
