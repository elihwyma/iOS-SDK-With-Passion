/*
 Image: /System/Library/Frameworks/Photos.framework/Photos
 */

#import <Foundation/NSObject.h>

@class NSError;

@interface _PHValidation : NSObject

{
    unsigned long long _requestedOptions;
    unsigned long long _validatedOptions;
    NSError *_error;
}

- (id)initWithOptions:(unsigned long long)arg1;
- (_Bool)isValid:(id *)arg1;
- (void)validateOption:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)assert:(_Bool)arg1 format:(id)arg2;
- (void)assert:(_Bool)arg1 error:(id)arg2;

@end
