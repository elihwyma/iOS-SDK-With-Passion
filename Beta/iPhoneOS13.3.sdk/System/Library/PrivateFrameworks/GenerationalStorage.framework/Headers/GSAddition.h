/*
 Image: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
 */

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSNumber, NSString, NSURL;

@protocol GSAdditionStoring, GSAdditionStoring><GSAdditionStoringPrivate, NSCopying><NSSecureCoding;

@interface GSAddition : NSObject

{
    NSObject<GSAdditionStoring><GSAdditionStoringPrivate> *_storage;
    unsigned long long _options;
    NSNumber *_size;
    NSString *_namespace;
    NSURL *_url;
    NSString *_originalName;
    NSString *_displayName;
    NSDictionary *_userInfo;
}

@property (nonatomic, readonly) NSData *sandboxExtension;
@property (nonatomic, readonly) _Bool isSavedConflict;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) NSObject<GSAdditionStoring> *storage;
@property (nonatomic, readonly) NSString *nameSpace;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSNumber *size;
@property (nonatomic, readonly) NSString *originalPOSIXName;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSDictionary *userInfo;
@property (nonatomic, readonly) id <NSCopying><NSSecureCoding> persistentIdentifier;

+ (id)makeNameForUser:(unsigned int)arg1 name:(id)arg2;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)replaceItemAtURL:(id)arg1 error:(id *)arg2;
- (_Bool)mergeUserInfo:(id)arg1 error:(id *)arg2;
- (id)displayNameWithError:(id *)arg1;
- (id)originalPOSIXNameWithError:(id *)arg1;
- (id)userInfoWithError:(id *)arg1;
- (void)_refreshWithDictionary:(id)arg1;
- (_Bool)refreshWithError:(id *)arg1;
- (id)_initWithStorage:(id)arg1 andDictionary:(id)arg2;
- (_Bool)setOptions:(unsigned long long)arg1 error:(id *)arg2;
- (_Bool)setDisplayName:(id)arg1 error:(id *)arg2;
- (_Bool)setNameSpace:(id)arg1 error:(id *)arg2;
- (_Bool)internalStat:(struct stat *)arg1;
- (_Bool)copyAdditionContentToURL:(id)arg1 error:(id *)arg2;

@end
