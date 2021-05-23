/*
 Image: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSDate, NSDictionary, NSSet, NSString, NSUUID;

@interface AXSSPunctuationGroup : NSObject

{
    _Bool _inCloud;
    _Bool _inDatabase;
    unsigned short _version;
    NSUUID *_uuid;
    NSString *_name;
    NSArray *_entries;
    NSSet *_autoSwitchContexts;
    NSUUID *_basePunctuationUUID;
    NSString *_ckChangeTag;
    NSDate *_lastModifiedDate;
    NSDate *_ckRecordProcessDate;
}

@property (retain, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *entries;
@property (retain, nonatomic) NSSet *autoSwitchContexts;
@property (retain, nonatomic) NSUUID *basePunctuationUUID;
@property (nonatomic) unsigned short version;
@property (nonatomic) _Bool inCloud;
@property (retain, nonatomic) NSString *ckChangeTag;
@property (retain, nonatomic) NSDate *lastModifiedDate;
@property (retain, nonatomic) NSDate *ckRecordProcessDate;
@property (nonatomic) _Bool inDatabase;
@property (nonatomic, readonly) _Bool isSystemPunctuationGroup;
@property (nonatomic, readonly) NSData *jsonRepresentation;
@property (nonatomic, readonly) NSDictionary *jsonDictionary;

+ (id)punctuationGroupFromJSONRepresentation:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;

@end
