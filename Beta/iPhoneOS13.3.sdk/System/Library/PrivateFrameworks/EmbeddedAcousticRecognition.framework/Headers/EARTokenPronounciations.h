/*
 Image: /System/Library/PrivateFrameworks/EmbeddedAcousticRecognition.framework/EmbeddedAcousticRecognition
 */

#import <NSObject.h>

@class NSArray, NSString;

@interface EARTokenPronounciations : NSObject

{
    NSString *_token;
    NSArray *_pronunciations;
}

@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSArray *pronunciations;

- (id)initWithToken:(id)arg1 pronunciations:(id)arg2;
- (struct TokenProns)_quasarProns;

@end
