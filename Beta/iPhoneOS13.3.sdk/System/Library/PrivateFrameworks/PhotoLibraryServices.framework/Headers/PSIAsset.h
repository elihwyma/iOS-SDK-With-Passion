/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PSIObject.h>

#import <PhotoLibraryServices/Swift-Protocol.h>

@class PSIDate;

@interface PSIAsset : PSIObject <Swift>

{
    PSIDate *_creationDate;
}

@property (readonly) PSIDate *creationDate;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUUID:(id)arg1 creationDate:(id)arg2;

@end
