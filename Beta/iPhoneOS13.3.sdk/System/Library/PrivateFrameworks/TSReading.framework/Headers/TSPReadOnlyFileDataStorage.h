/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <TSReading/TSPFileDataStorage.h>

@class NSURL;

@interface TSPReadOnlyFileDataStorage : TSPFileDataStorage

{
    NSURL *_URL;
}

- (id)initWithURL:(id)arg1;
- (_Bool)readOnly;
- (void)performReadWithAccessor:(CDUnknownBlockType)arg1;
- (_Bool)writeToBundleWriter:(id)arg1 preferredFilename:(id)arg2 filename:(id *)arg3 didCopyDataToBundle:(_Bool *)arg4;

@end
