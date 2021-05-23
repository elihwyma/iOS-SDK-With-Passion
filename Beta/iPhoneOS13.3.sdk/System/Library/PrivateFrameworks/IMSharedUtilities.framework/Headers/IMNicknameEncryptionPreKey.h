/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSObject.h>

@class IMNicknameFieldEncryptionKey, IMNicknameFieldTaggingKey, IMNicknameRecordTaggingKey, NSData;

@interface IMNicknameEncryptionPreKey : NSObject

{
    NSData *_generatedData;
    NSData *_derivedData;
}

@property (nonatomic, readonly) IMNicknameFieldEncryptionKey *fieldEncryptionKey;
@property (nonatomic, readonly) IMNicknameFieldTaggingKey *fieldTaggingKey;
@property (nonatomic, readonly) IMNicknameRecordTaggingKey *recordTaggingKey;

+ (id)preKeyWithDataRepresentation:(id)arg1 error:(id *)arg2;
+ (id)generatePreKeyWithError:(id *)arg1;

- (void)dealloc;
- (id)dataRepresentation;
- (id)initWithGeneratedData:(id)arg1 derivedData:(id)arg2;
- (id)_subDerviedKeyDataAtIndex:(unsigned long long)arg1;

@end
