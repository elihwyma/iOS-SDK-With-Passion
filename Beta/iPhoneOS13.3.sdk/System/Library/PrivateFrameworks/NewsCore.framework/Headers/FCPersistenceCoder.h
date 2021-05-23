/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface FCPersistenceCoder : NSObject

{
    NSData *_key;
}

@property (copy, nonatomic, readonly) NSData *key;

- (id)initWithKey:(id)arg1;
- (id)decodeData:(id)arg1;
- (id)encodeData:(id)arg1;
- (id)_codeData:(id)arg1;

@end
