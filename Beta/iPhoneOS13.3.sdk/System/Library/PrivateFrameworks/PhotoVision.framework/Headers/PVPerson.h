/*
 Image: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
 */

#import <PhotoVision/PVObject.h>

@class NSString;

@interface PVPerson : PVObject

{
    _Bool _inPersonNamingModel;
    _Bool _verified;
    NSString *_name;
    NSString *_uri;
    long long _faceCount;
    long long _manualOrder;
    long long _type;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *uri;
@property (nonatomic) long long faceCount;
@property (nonatomic) _Bool inPersonNamingModel;
@property (nonatomic) _Bool verified;
@property (nonatomic) long long manualOrder;
@property (nonatomic) long long type;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithPerson:(id)arg1;
- (void)_setPropertiesFrom:(id)arg1;

@end
