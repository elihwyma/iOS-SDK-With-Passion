/*
 Image: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
 */

#import <Foundation/NSObject.h>

@class CRCameraReaderOutputInternal, NSString;

@interface CRCameraReaderOutput : NSObject

{
    CRCameraReaderOutputInternal *_objectInternal;
}

@property (retain) CRCameraReaderOutputInternal *objectInternal;
@property (readonly) NSString *type;
@property (readonly) NSString *stringValue;
@property (readonly) NSString *formattedStringValue;

- (id)init;
- (void)dealloc;
- (id)initWithImageReaderOutput:(id)arg1;

@end
