/*
 Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

#import <Foundation/NSObject.h>

@class HDSourceEntity, NSString;

@interface HDSourceRevision : NSObject

{
    HDSourceEntity *_sourceEntity;
    NSString *_version;
    NSString *_productType;
    CDStruct_f6aba300 _operatingSystemVersion;
}

@property (nonatomic, readonly) HDSourceEntity *sourceEntity;
@property (nonatomic, readonly) NSString *version;
@property (nonatomic, readonly) NSString *productType;
@property (nonatomic, readonly) CDStruct_2ec95fd7 operatingSystemVersion;

- (id)initWithSource:(id)arg1 version:(id)arg2 productType:(id)arg3 operatingSystemVersion:(CDStruct_2ec95fd7)arg4;

@end
