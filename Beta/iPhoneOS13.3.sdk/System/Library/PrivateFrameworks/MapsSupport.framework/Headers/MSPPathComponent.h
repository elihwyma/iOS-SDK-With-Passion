/*
 Image: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
 */

#import <Foundation/NSObject.h>

@class NSUUID;

@interface MSPPathComponent : NSObject

{
    unsigned short _index;
    NSUUID *_originIdentifier;
}

@property (nonatomic, readonly) NSUUID *originIdentifier;
@property (nonatomic, readonly) unsigned short index;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)compare:(id)arg1;
- (id)initWithIndex:(unsigned short)arg1 originIdentifier:(id)arg2;

@end
