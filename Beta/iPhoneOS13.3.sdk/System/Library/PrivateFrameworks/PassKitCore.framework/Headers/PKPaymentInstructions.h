/*
 Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

#import <NSObject.h>

@class NSArray, NSData, NSDictionary;

@interface PKPaymentInstructions : NSObject

{
    NSData *_instructionsData;
    NSData *_signatureData;
    NSDictionary *_instructionsDictionary;
}

@property (retain, nonatomic) NSDictionary *instructionsDictionary;
@property (nonatomic, readonly) NSData *instructionsData;
@property (nonatomic, readonly) NSData *signatureData;
@property (nonatomic, readonly) NSArray *allImageKeys;

- (id)description;
- (struct CGImage *)imageForKey:(id)arg1;
- (id)initWithInstructions:(id)arg1 signature:(id)arg2;
- (id)_imageDataForImageWithKey:(id)arg1 format:(id *)arg2;
- (struct CGDataProvider *)_createImageDataProviderForImageKey:(id)arg1;
- (void)_pruneDirectoryAtURL:(id)arg1;
- (_Bool)archiveToDirectoryAtURL:(id)arg1 error:(id *)arg2;

@end
