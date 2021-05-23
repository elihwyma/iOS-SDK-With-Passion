/*
 Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

#import <Foundation/NSObject.h>

@class AVMetadataMachineReadableCodeObject, AVMetadataObject, NSString;

@interface CAMMachineReadableCodeResult : NSObject

{
    NSString *_uniqueIdentifier;
    AVMetadataMachineReadableCodeObject *_underlyingMachineReadableCodeObject;
}

@property (nonatomic, readonly) AVMetadataMachineReadableCodeObject *underlyingMachineReadableCodeObject;
@property (nonatomic, readonly) NSString *symbolString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (copy, nonatomic, readonly) NSString *metadataType;
@property (copy, nonatomic, readonly) NSString *uniqueIdentifier;
@property (nonatomic, readonly) AVMetadataObject *underlyingMetadataObject;

- (_Bool)isOfSignificantSize;
- (id)initWithMachineReadableCodeObject:(id)arg1;

@end
