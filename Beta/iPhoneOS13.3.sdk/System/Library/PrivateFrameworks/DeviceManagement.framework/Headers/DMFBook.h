/*
 Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

#import <NSObject.h>

@class NSNumber, NSString;

@interface DMFBook : NSObject

{
    NSString *_persistentID;
    NSNumber *_iTunesStoreID;
    NSString *_author;
    NSString *_title;
    NSString *_version;
    unsigned long long _type;
    unsigned long long _state;
}

@property (copy, nonatomic, readonly) NSString *persistentID;
@property (copy, nonatomic, readonly) NSNumber *iTunesStoreID;
@property (copy, nonatomic, readonly) NSString *author;
@property (copy, nonatomic, readonly) NSString *title;
@property (copy, nonatomic, readonly) NSString *version;
@property (nonatomic, readonly) unsigned long long type;
@property (nonatomic, readonly) unsigned long long state;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPersistentID:(id)arg1 iTunesStoreID:(id)arg2 author:(id)arg3 title:(id)arg4 version:(id)arg5 type:(unsigned long long)arg6 state:(unsigned long long)arg7;

@end
