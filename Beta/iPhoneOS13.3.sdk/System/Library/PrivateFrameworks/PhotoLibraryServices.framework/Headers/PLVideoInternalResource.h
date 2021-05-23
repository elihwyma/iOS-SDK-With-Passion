/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol PLResource;

@interface PLVideoInternalResource : NSObject

{
    id <PLResource> _backingResource;
}

@property (nonatomic, readonly) id <PLResource> backingResource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (_Bool)isEqual:(id)arg1;
- (_Bool)isPlayable;
- (_Bool)isLocallyAvailable;
- (_Bool)isLocallyGeneratable;
- (_Bool)isStreamable;
- (_Bool)isRemotelyAvailable;
- (_Bool)isMediumHighQuality;
- (_Bool)isOriginalVideoComplement;
- (_Bool)matchesOrExceedsQualityLevel:(unsigned int)arg1;
- (id)fileURLIfLocal;
- (id)initWithBackingResource:(id)arg1;

@end
