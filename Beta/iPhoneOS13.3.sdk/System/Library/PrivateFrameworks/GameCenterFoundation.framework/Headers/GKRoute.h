/*
 Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSRegularExpression, NSString;

@interface GKRoute : NSObject

{
    NSRegularExpression *_regex;
    NSArray *_parameterNames;
    NSString *_scheme;
}

- (void)dealloc;
- (id)initWithString:(id)arg1;
- (_Bool)matchesURL:(id)arg1;
- (id)initWithString:(id)arg1 scheme:(id)arg2;
- (id)nonParameterCharacterSet;
- (_Bool)matchesURL:(id)arg1 parameters:(id *)arg2;

@end
