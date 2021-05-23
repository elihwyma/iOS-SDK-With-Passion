/*
 Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

#import <NSObject.h>

@class NSArray, NSData, NSDate, NSDictionary, NSString;

@interface CUKeychainItem : NSObject

{
    _Bool _invisible;
    _Bool _legacy;
    int _accessibleType;
    int _syncType;
    NSString *_accessGroup;
    NSDate *_dateCreated;
    NSDate *_dateModified;
    NSString *_identifier;
    NSDictionary *_metadata;
    NSArray *_removedMetadata;
    NSString *_name;
    NSData *_persistentRef;
    NSDictionary *_secrets;
    NSString *_type;
    NSString *_userDescription;
    NSString *_viewHint;
}

@property (copy, nonatomic) NSString *accessGroup;
@property (nonatomic) int accessibleType;
@property (copy, nonatomic, readonly) NSDate *dateCreated;
@property (copy, nonatomic, readonly) NSDate *dateModified;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) _Bool invisible;
@property (nonatomic) _Bool legacy;
@property (copy, nonatomic) NSDictionary *metadata;
@property (copy, nonatomic) NSArray *removedMetadata;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSData *persistentRef;
@property (copy, nonatomic) NSDictionary *secrets;
@property (nonatomic) int syncType;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *userDescription;
@property (copy, nonatomic) NSString *viewHint;

- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (_Bool)isEqualToKeychainItem:(id)arg1 flags:(unsigned int)arg2;
- (id)_attributesDictionaryWithFlags:(unsigned int)arg1 error:(id *)arg2;
- (void)_mergeItem:(id)arg1;
- (_Bool)_updateWithAttributesDictionary:(id)arg1 flags:(unsigned int)arg2 error:(id *)arg3;

@end
