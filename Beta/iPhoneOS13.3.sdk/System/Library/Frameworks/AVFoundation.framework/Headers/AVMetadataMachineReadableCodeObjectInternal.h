/*
 Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <Foundation/NSObject.h>

@class CIBarcodeDescriptor, NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AVMetadataMachineReadableCodeObjectInternal : NSObject

{
    NSArray *corners;
    NSString *stringValue;
    NSDictionary *basicDescriptor;
    _Bool decoded;
    CIBarcodeDescriptor *descriptor;
}

@property (retain) NSArray *corners;
@property (retain) NSString *stringValue;
@property (retain) NSDictionary *basicDescriptor;
@property _Bool decoded;
@property (retain) CIBarcodeDescriptor *descriptor;

- (void)dealloc;

@end
