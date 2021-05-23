/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <Foundation/NSObject.h>

@class NSDate, NSDictionary, NSURL, NSUUID;

@interface WBSCloudTabCloseRequest : NSObject

{
    NSUUID *_sourceDeviceUUID;
    NSUUID *_requestUUID;
    NSUUID *_destinationDeviceUUID;
    NSUUID *_tabUUID;
    NSURL *_url;
    NSDate *_lastModified;
}

@property (nonatomic, readonly) NSUUID *requestUUID;
@property (nonatomic, readonly) NSUUID *destinationDeviceUUID;
@property (nonatomic, readonly) NSUUID *tabUUID;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSDate *lastModified;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;

+ (id)_dictionaryWithURL:(id)arg1 tabUUID:(id)arg2 lastModified:(id)arg3 sourceDeviceUUID:(id)arg4 destinationDeviceUUID:(id)arg5;
+ (_Bool)isCloudTabCloseRequestDictionary:(id)arg1;
+ (id)destinationDeviceUUIDInDictionary:(id)arg1;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDictionary:(id)arg1 requestUUID:(id)arg2;
- (id)initWithURL:(id)arg1 tabUUID:(id)arg2 lastModified:(id)arg3 sourceDeviceUUID:(id)arg4 destinationDeviceUUID:(id)arg5 requestUUID:(id)arg6;
- (_Bool)matchesCloudTab:(id)arg1;

@end
