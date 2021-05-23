/*
 Image: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TBPopularityScore : NSObject

{
    unsigned long long _score;
    NSString *_typeDescription;
}

@property (retain, nonatomic) NSString *typeDescription;
@property (nonatomic) unsigned long long score;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)popularityScoreWithValue:(unsigned long long)arg1;

- (id)initWithValue:(unsigned long long)arg1;

@end
