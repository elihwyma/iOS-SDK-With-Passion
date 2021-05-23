/*
 Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

#import <Foundation/NSObject.h>

@class NSString, NSUUID;

@interface MRApplicationActivity : NSObject

{
    NSUUID *_uniqueIdentifier;
    NSString *_primaryApplicationDisplayID;
    NSString *_secondaryApplicationDisplayID;
    int _status;
    int _creatorProcessID;
}

@property (nonatomic, readonly) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly) NSString *primaryApplicationDisplayID;
@property (nonatomic, readonly) NSString *secondaryApplicationDisplayID;
@property (nonatomic, readonly) int status;
@property (nonatomic, readonly) int creatorProcessID;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_copyWithZone:(struct _NSZone *)arg1 usingConcreteClass:(Class)arg2;
- (id)initWithPrimaryAppDisplayID:(id)arg1 secondaryAppDisplayID:(id)arg2;

@end
