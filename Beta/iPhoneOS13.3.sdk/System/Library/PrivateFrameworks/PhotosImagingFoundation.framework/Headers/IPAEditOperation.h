/*
 Image: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
 */

#import <NSObject.h>

#import <PhotosImagingFoundation/Swift-Protocol.h>

@class NSString, NSUUID;

@interface IPAEditOperation : NSObject <Swift>

{
    NSUUID *_UUID;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)presetifyAdjustment:(id)arg1;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)identifier;
- (id)UUID;
- (void)setUUID:(id)arg1;
- (id)initWithOperation:(id)arg1;
- (id)settingsDictionary;
- (id)autoIdentifier;
- (id)archivalRepresentation;
- (id)initWithSettingsDictionary:(id)arg1;
- (_Bool)isEqualToOperation:(id)arg1;

@end
