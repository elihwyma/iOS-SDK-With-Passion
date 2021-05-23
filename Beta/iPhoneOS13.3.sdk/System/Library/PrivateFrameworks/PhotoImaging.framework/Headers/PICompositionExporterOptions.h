/*
 Image: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
 */

#import <Foundation/NSObject.h>

@class NSString, NUColorSpace, NUPriority;

@protocol NUScalePolicy;

@interface PICompositionExporterOptions : NSObject

{
    NUPriority *_priority;
    NUColorSpace *_colorSpace;
    NSString *_pairingIdentifier;
    id <NUScalePolicy> _scalePolicy;
}

@property (retain) NUPriority *priority;
@property (retain) NUColorSpace *colorSpace;
@property (copy) NSString *pairingIdentifier;
@property (retain) id <NUScalePolicy> scalePolicy;

- (id)init;

@end
