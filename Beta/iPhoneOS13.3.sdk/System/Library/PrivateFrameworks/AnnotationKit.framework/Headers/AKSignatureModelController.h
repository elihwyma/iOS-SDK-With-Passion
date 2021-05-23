/*
 Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

#import <Foundation/NSObject.h>

@class AKController, AKSignature, NSArray, NSMutableArray;

@interface AKSignatureModelController : NSObject

{
    int _nextUID;
    _Bool _signaturesDecryptionAttempted;
    NSMutableArray *_signatures;
    AKSignature *_selectedSignature;
    AKController *_controller;
}

@property (weak) AKController *controller;
@property (readonly) NSArray *signatures;
@property (retain, nonatomic) AKSignature *selectedSignature;

- (id)initWithController:(id)arg1;
- (void)_saveSignatureToPersistentStorage:(id)arg1;
- (_Bool)_deleteSignatureFromKeychain:(id)arg1;
- (void)_loadSignaturesFromPersistentStorage;
- (id)_createAKSignatureFromItemRef:(id)arg1;
- (_Bool)_createNewKeychainItemWithSignature:(id)arg1;
- (void)insertObject:(id)arg1 inSignaturesAtIndex:(unsigned long long)arg2;
- (void)removeObjectFromSignaturesAtIndex:(unsigned long long)arg1;
- (void)reloadSignaturesFromSource;
- (void)_migrateLegacySignaturesFromPreviewContainer;

@end
