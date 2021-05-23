/*
 Image: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
 */

#import <Foundation/NSObject.h>

@class NSData, NSDate, NSString;

@interface _KSTextReplacementEntry : NSObject

{
    _Bool _needsSaveToCloud;
    _Bool _wasDeleted;
    NSString *_phrase;
    NSString *_shortcut;
    NSDate *_timestamp;
    _KSTextReplacementEntry *_priorValue;
    NSData *_cloudData;
    NSString *_cloudID;
}

@property (retain, nonatomic) NSData *cloudData;
@property _Bool needsSaveToCloud;
@property _Bool wasDeleted;
@property (copy, nonatomic) NSString *cloudID;
@property (copy, nonatomic) NSString *phrase;
@property (copy, nonatomic) NSString *shortcut;
@property (copy, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) _KSTextReplacementEntry *priorValue;

+ (_Bool)supportsSecureCoding;
+ (id)localEntryFromCloudEntry:(id)arg1;

- (id)init;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)uniqueID;
- (_Bool)isEquivalentTo:(id)arg1;
- (id)encryptedFields;
- (id)unEncryptedFields;
- (id)uniqueRecordNameVer0;
- (id)uniqueRecordName;

@end
