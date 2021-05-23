/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface IMNicknameEncryptionTag : NSObject

{
    NSData *_dataRepresentation;
}

@property (nonatomic, readonly) NSString *stringRepresentation;
@property (nonatomic, readonly) NSData *dataRepresentation;

+ (id)_tagWithDataRepresentation:(id)arg1 length:(unsigned long long)arg2 error:(id *)arg3;
+ (id)_tagWithStringRepresentation:(id)arg1 length:(unsigned long long)arg2 error:(id *)arg3;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithDataRepresentation:(id)arg1;
- (_Bool)isEqualToTag:(id)arg1 error:(id *)arg2;

@end
