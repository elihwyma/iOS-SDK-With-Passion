/*
 Image: /System/Library/Frameworks/Vision.framework/Vision
 */

#import <Foundation/NSObject.h>

@class VNProcessingDevice;

__attribute__((visibility("hidden")))
@interface VNRequestConfiguration : NSObject

{
    _Bool _preferBackgroundProcessing;
    Class _requestClass;
    unsigned long long _resolvedRevision;
    unsigned long long _detectionLevel;
    VNProcessingDevice *_processingDevice;
    unsigned long long _metalContextPriority;
    unsigned long long _modelFileBackingStore;
}

@property (nonatomic, readonly) Class requestClass;
@property (nonatomic) unsigned long long resolvedRevision;
@property (nonatomic) unsigned long long detectionLevel;
@property (retain, nonatomic) VNProcessingDevice *processingDevice;
@property (nonatomic) unsigned long long metalContextPriority;
@property (nonatomic) _Bool preferBackgroundProcessing;
@property (nonatomic) unsigned long long modelFileBackingStore;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_allPropertyNames;
- (id)initWithRequestClass:(Class)arg1;

@end
