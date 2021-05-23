/*
 Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

#import <NSObject.h>

@class CPLResource, NSData, NSError;

__attribute__((visibility("hidden")))
@interface CPLProxyLibraryManagerOutstandingInvocation : NSObject

{
    _Bool _inMemoryRequest;
    _Bool _didStart;
    _Bool _didFinish;
    float _progress;
    NSError *_finalError;
    CPLResource *_finalResource;
    NSData *_finalData;
}

@property (nonatomic, getter=isInMemoryRequest) _Bool inMemoryRequest;
@property (nonatomic) _Bool didStart;
@property (nonatomic) float progress;
@property (nonatomic) _Bool didFinish;
@property (retain, nonatomic) NSError *finalError;
@property (retain, nonatomic) CPLResource *finalResource;
@property (retain, nonatomic) NSData *finalData;

- (id)description;

@end
