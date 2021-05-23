/*
 Image: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface KCJoiningMessage : NSObject

{
    int _type;
    NSData *_firstData;
    NSData *_secondData;
    NSData *_der;
}

@property (readonly) int type;
@property (readonly) NSData *firstData;
@property (readonly) NSData *secondData;
@property (readonly) NSData *der;

+ (id)encodeToDERType:(int)arg1 data:(id)arg2 payload:(id)arg3 error:(id *)arg4;
+ (id)messageWithDER:(id)arg1 error:(id *)arg2;
+ (id)messageWithType:(int)arg1 data:(id)arg2 error:(id *)arg3;
+ (id)messageWithType:(int)arg1 data:(id)arg2 secondData:(id)arg3 error:(id *)arg4;
+ (id)messageWithType:(int)arg1 data:(id)arg2 payload:(id)arg3 error:(id *)arg4;
+ (unsigned long long)encodedSizeType:(int)arg1 data:(id)arg2 payload:(id)arg3 error:(id *)arg4;

- (_Bool)inflatePartsOfEncoding:(id *)arg1;
- (id)initWithDER:(id)arg1 error:(id *)arg2;
- (id)initWithType:(int)arg1 data:(id)arg2 payload:(id)arg3 error:(id *)arg4;

@end
