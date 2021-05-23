/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface IMNicknameEncryptionPlainRecordField : NSObject

{
    NSString *_fieldName;
    NSData *_plainData;
}

@property (nonatomic, readonly) NSString *fieldName;
@property (nonatomic, readonly) NSData *plainData;

- (void)dealloc;
- (id)description;
- (id)initWithFieldName:(id)arg1 plainData:(id)arg2;

@end
