/*
 Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, NSURL;

@protocol NURAWImageProperties;

@interface _NUImageProperties : NSObject

{
    _Bool _isFusedOvercapture;
    NSURL *_url;
    NSDictionary *_metadata;
    struct CGColorSpace *_colorSpace;
    long long _orientation;
    NSString *_fileUTI;
    long long _alphaInfo;
    long long _componentInfo;
    NSDictionary *_auxiliaryImagesProperties;
    id <NURAWImageProperties> _rawProperties;
    CDStruct_d58201db _size;
}

@property (retain) NSURL *url;
@property (retain) NSDictionary *metadata;
@property struct CGColorSpace *colorSpace;
@property CDStruct_912cb5d2 size;
@property long long orientation;
@property (retain) NSString *fileUTI;
@property long long alphaInfo;
@property long long componentInfo;
@property _Bool isFusedOvercapture;
@property (retain) NSDictionary *auxiliaryImagesProperties;
@property (retain) id <NURAWImageProperties> rawProperties;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

@end
