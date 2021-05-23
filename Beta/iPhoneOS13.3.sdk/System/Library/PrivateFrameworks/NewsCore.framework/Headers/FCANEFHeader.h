/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSData, NSString;

@interface FCANEFHeader : NSObject

{
    NSData *_wrappingKeyID;
    NSData *_wrappedKey;
    NSString *_contentType;
    NSData *_headerData;
}

@property (copy, nonatomic, readonly) NSData *wrappingKeyID;
@property (copy, nonatomic, readonly) NSData *wrappedKey;
@property (copy, nonatomic, readonly) NSString *contentType;
@property (nonatomic, readonly) unsigned long long totalLength;
@property (copy, nonatomic, readonly) NSData *headerData;

- (id)init;
- (id)initWithFilePath:(id)arg1;
- (id)initWithFileHandle:(id)arg1;
- (id)initWithHeaderData:(id)arg1 wrappingKeyID:(id)arg2 wrappedKey:(id)arg3 contentType:(id)arg4;
- (id)initWithWrappingKeyID:(id)arg1 wrappedKey:(id)arg2 contentType:(id)arg3;

@end
