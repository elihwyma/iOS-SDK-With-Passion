/*
 Image: /System/Library/PrivateFrameworks/NLP.framework/NLP
 */

#import <NLP/Swift-Protocol.h>

@class NSString;

@protocol NLParsecNamedEntity <Swift>

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned char category;
@property (nonatomic, readonly) float score;

@end
