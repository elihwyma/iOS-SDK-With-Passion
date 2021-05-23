/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class NSSet, NSString;

@interface FCTopicalNodeElement : NSObject <Swift>

{
    NSString *_identifier;
    NSSet *_topics;
    double _score;
}

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSSet *topics;
@property (nonatomic) double score;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1 topics:(id)arg2 score:(double)arg3;

@end
