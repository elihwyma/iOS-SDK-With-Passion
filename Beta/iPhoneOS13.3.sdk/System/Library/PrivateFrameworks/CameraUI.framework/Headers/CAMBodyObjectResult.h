/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class AVMetadataBodyObject, AVMetadataObject, NSString;

@interface CAMBodyObjectResult : NSObject

{
    NSString *_uniqueIdentifier;
    AVMetadataBodyObject *__metadataBodyObject;
}

@property (retain, nonatomic) AVMetadataBodyObject *_metadataBodyObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *metadataType;
@property (copy, nonatomic, readonly) NSString *uniqueIdentifier;
@property (nonatomic, readonly) AVMetadataObject *underlyingMetadataObject;

- (id)initWithBodyObject:(id)arg1;

@end
