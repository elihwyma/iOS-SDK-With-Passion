/*
 Image: /System/Library/Frameworks/iAd.framework/iAd
 */

#import <NSObject.h>

@class NSMutableSet, NSString;

@interface ADContext : NSObject

{
    NSMutableSet *_tags;
    NSString *_requestJSON;
}

@property (retain, nonatomic) NSMutableSet *tags;
@property (copy, nonatomic) NSString *requestJSON;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTags:(id)arg1;
- (id)fullContext;
- (void)setContextInfoForConfiguration:(id)arg1;
- (_Bool)matchesForNewContext:(id)arg1 matchClauses:(id)arg2 excludeTags:(id)arg3;
- (_Bool)isFeed;
- (_Bool)_matchesClause:(id)arg1 inContext:(id)arg2;

@end
