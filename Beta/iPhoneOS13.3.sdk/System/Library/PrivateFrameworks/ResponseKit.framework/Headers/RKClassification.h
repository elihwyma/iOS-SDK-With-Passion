/*
 Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface RKClassification : NSObject

{
    int _sensitive;
    NSString *_language;
    unsigned long long _sentenceType;
    unsigned long long _gender;
    NSArray *_customResponses;
    NSString *_taggedText;
    NSArray *_sentenceEntities;
    NSArray *_matchedRanges;
}

@property (retain) NSString *language;
@property unsigned long long sentenceType;
@property (getter=isSensitive) int sensitive;
@property unsigned long long gender;
@property (retain) NSArray *customResponses;
@property (retain) NSString *taggedText;
@property (retain) NSArray *sentenceEntities;
@property (retain) NSArray *matchedRanges;

- (id)init;

@end
