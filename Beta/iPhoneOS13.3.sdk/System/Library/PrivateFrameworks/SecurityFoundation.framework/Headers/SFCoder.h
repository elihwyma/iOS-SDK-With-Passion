/*
 Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

#import <Foundation/NSObject.h>

@class SFCodingOptions;

@interface SFCoder : NSObject

{
    id _coderInternal;
}

@property (copy, nonatomic) SFCodingOptions *options;

- (id)initWithOptions:(id)arg1;
- (id)encodeTopLevelValue:(id)arg1 error:(id *)arg2;

@end
