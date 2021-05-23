/*
 Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

#import <NSObject.h>

@interface CKSignatureGenerator : NSObject

{
    _Bool _valid;
    void *_generator;
}

@property (nonatomic) void *generator;
@property (nonatomic, getter=isValid) _Bool valid;

+ (_Bool)isValidSignature:(id)arg1;
+ (id)signatureWithFileDescriptor:(int)arg1 error:(id *)arg2;
+ (_Bool)isValidV2Signature:(id)arg1;
+ (id)signatureForStreamingAsset;

- (id)init;
- (void)dealloc;
- (void)updateWithData:(id)arg1;
- (char *)_newSignatureByFinishingGenerator;
- (void)updateWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (id)dataByFinishingSignature;

@end
