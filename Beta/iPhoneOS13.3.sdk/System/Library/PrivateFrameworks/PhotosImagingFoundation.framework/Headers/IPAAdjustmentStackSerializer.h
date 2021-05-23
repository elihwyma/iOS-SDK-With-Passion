/*
 Image: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
 */

#import <NSObject.h>

@class NSString;

@interface IPAAdjustmentStackSerializer : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)archiveDictionary:(id)arg1 error:(id *)arg2;
+ (id)compressData:(id)arg1;
+ (id)decompressData:(id)arg1;
+ (id)unarchiveData:(id)arg1;
+ (id)archiveDictionary:(id)arg1;
+ (id)compressData:(id)arg1 error:(id *)arg2;
+ (id)decompressData:(id)arg1 error:(id *)arg2;
+ (id)B64StringForData:(id)arg1;
+ (id)dataFromB64String:(id)arg1;
+ (id)dataFromJSON:(id)arg1 error:(id *)arg2;
+ (id)JSONFromData:(id)arg1 error:(id *)arg2;
+ (id)dataFromJSON:(id)arg1;
+ (id)JSONFromData:(id)arg1;
+ (id)dataFromPropertyList:(id)arg1 error:(id *)arg2;
+ (id)propertyListFromData:(id)arg1 error:(id *)arg2;
+ (id)dataFromPropertyList:(id)arg1;
+ (id)propertyListFromData:(id)arg1;
+ (id)unarchiveData:(id)arg1 error:(id *)arg2;

- (id)dataFromAdjustmentStack:(id)arg1 error:(id *)arg2;
- (id)adjustmentStackFromData:(id)arg1 error:(id *)arg2;
- (id)dataFromArchive:(id)arg1 error:(id *)arg2;
- (id)archiveFromData:(id)arg1 error:(id *)arg2;
- (id)_dataFromAdjustmentStack:(id)arg1 error:(id *)arg2;
- (id)_adjustmentStackFromData:(id)arg1 error:(id *)arg2;

@end
