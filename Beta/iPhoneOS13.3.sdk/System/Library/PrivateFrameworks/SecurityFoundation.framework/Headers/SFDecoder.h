/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <Foundation/NSObject.h>

@class SFCodingOptions;

@interface SFDecoder : NSObject

{
    id _decoderInternal;
}

@property (copy, nonatomic) SFCodingOptions *options;

- (id)initWithOptions:(id)arg1;
- (id)decodeValueOfType:(Class)arg1 fromData:(id)arg2 error:(id)arg3;

@end
