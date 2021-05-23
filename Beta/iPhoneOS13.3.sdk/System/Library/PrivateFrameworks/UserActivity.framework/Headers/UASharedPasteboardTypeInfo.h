/*
 Image: /System/Library/PrivateFrameworks/UserActivity.framework/UserActivity
 */

#import <Foundation/NSObject.h>

@class NSFileHandle, NSNumber, NSString, NSUUID;

@interface UASharedPasteboardTypeInfo : NSObject

{
    _Bool _preferFileRep;
    NSString *_type;
    NSUUID *_uuid;
    NSNumber *_offset;
    long long _size;
    NSFileHandle *_dataFile;
    NSString *_typeHint;
    NSNumber *_index;
}

@property (copy) NSString *type;
@property (copy) NSUUID *uuid;
@property (copy) NSNumber *offset;
@property long long size;
@property (retain) NSFileHandle *dataFile;
@property _Bool preferFileRep;
@property (copy) NSString *typeHint;
@property (copy) NSNumber *index;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
