/*
 Image: /System/Library/PrivateFrameworks/AccessibilitySharedSupport.framework/AccessibilitySharedSupport
 */

#import <Foundation/NSObject.h>

@class NSData, NSDate, NSDictionary, NSString, NSUUID;

@interface AXSSPunctuationEntry : NSObject

{
    NSUUID *_uuid;
    NSUUID *_groupUUID;
    _Bool _inCloud;
    unsigned short _version;
    NSString *_punctuation;
    NSString *_replacement;
    long long _rule;
    NSString *_ckChangeTag;
    NSDate *_lastModifiedDate;
    NSDate *_ckRecordProcessDate;
}

@property (retain, nonatomic) NSString *punctuation;
@property (retain, nonatomic) NSString *replacement;
@property (nonatomic) long long rule;
@property (retain, nonatomic) NSUUID *uuid;
@property (retain, nonatomic) NSUUID *groupUUID;
@property (nonatomic) unsigned short version;
@property (nonatomic) _Bool inCloud;
@property (retain, nonatomic) NSString *ckChangeTag;
@property (retain, nonatomic) NSDate *lastModifiedDate;
@property (retain, nonatomic) NSDate *ckRecordProcessDate;
@property (nonatomic, readonly) NSData *jsonRepresentation;
@property (nonatomic, readonly) NSDictionary *jsonDictionary;

+ (id)punctuationEntryFromJSONDictionary:(id)arg1;
+ (id)punctuationEntryFromJSONRepresentation:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
