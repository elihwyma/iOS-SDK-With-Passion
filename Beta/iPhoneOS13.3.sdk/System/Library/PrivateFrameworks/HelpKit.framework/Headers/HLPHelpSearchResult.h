/*
 Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface HLPHelpSearchResult : NSObject

{
    double _relevanceScore;
    long long _weight;
    long long _matchCount;
    NSString *_identifier;
}

@property (nonatomic) double relevanceScore;
@property (nonatomic) long long weight;
@property (nonatomic) long long matchCount;
@property (retain, nonatomic) NSString *identifier;

- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
