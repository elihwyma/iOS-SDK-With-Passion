/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <Foundation/NSObject.h>

@class NSUUID;

@interface MSPReplicaEdit : NSObject

{
    NSUUID *_identifierOfAffectedRecord;
}

@property (nonatomic, readonly) NSUUID *identifierOfAffectedRecord;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithIdentifierOfAffectedRecord:(id)arg1;

@end
