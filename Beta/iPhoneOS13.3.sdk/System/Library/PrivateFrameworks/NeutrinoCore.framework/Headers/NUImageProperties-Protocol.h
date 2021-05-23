/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <NeutrinoCore/Swift-Protocol.h>

@class NSDictionary, NSString, NSURL;

@protocol NURAWImageProperties;

@protocol NUImageProperties <Swift>

@property (readonly) NSURL *url;
@property (readonly) NSDictionary *metadata;
@property (readonly) struct CGColorSpace *colorSpace;
@property (readonly) CDStruct_912cb5d2 size;
@property (readonly) long long orientation;
@property (readonly) NSString *fileUTI;
@property (readonly) long long alphaInfo;
@property (readonly) long long componentInfo;
@property (readonly) _Bool isFusedOvercapture;
@property (readonly) NSDictionary *auxiliaryImagesProperties;
@property (readonly) id <NURAWImageProperties> rawProperties;

@end
