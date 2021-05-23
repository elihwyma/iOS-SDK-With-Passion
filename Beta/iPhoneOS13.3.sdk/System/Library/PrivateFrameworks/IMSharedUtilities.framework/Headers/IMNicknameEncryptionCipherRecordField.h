/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSObject.h>

@class IMNicknameEncryptionFieldTag, NSData, NSString;

@interface IMNicknameEncryptionCipherRecordField : NSObject

{
    NSString *_fieldName;
    NSData *_cipherData;
    NSData *_IV;
    IMNicknameEncryptionFieldTag *_tag;
}

@property (nonatomic, readonly) NSString *fieldName;
@property (nonatomic, readonly) NSData *cipherData;
@property (nonatomic, readonly) NSData *IV;
@property (nonatomic, readonly) IMNicknameEncryptionFieldTag *tag;

+ (id)cipherRecordFieldWithFieldName:(id)arg1 dataRepresentation:(id)arg2 error:(id *)arg3;

- (void)dealloc;
- (id)description;
- (id)dataRepresentationWithError:(id *)arg1;
- (id)initWithFieldName:(id)arg1 cipherData:(id)arg2 IV:(id)arg3 tag:(id)arg4;

@end
