/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <CoreHandwriting/CHTokenizedTextResultToken.h>

@class NSIndexSet, NSString;

@interface CHMutableTokenizedTextResultToken : CHTokenizedTextResultToken

@property (copy, nonatomic) NSString *string;
@property (copy, nonatomic) NSIndexSet *strokeIndexes;
@property (nonatomic) unsigned int wordID;
@property (nonatomic) double recognitionScore;
@property (nonatomic) double combinedScore;
@property (nonatomic) unsigned long long properties;
@property (nonatomic) long long substrokeCount;

- (id)copyWithZone:(struct _NSZone *)arg1;

@end
