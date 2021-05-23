/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSString;

@interface PLCodec : PLManagedObject

@property (copy, nonatomic) NSString *fourCharCodeName;
@property (nonatomic, readonly, getter=isPlayable) _Bool playable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)entityName;
+ (id)codecFromFourCharCodeName:(id)arg1 createIfMissing:(_Bool)arg2 context:(id)arg3;
+ (id)commonCodec_H264_inContext:(id)arg1;
+ (id)commonCodec_HEVC_inContext:(id)arg1;

- (_Bool)supportsCloudUpload;
- (unsigned int)_typeCodeFromString:(id)arg1;

@end
