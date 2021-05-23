/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class NSString;

@interface FCSolArticle : NSObject <Swift>

{
    _Bool _accessible;
    NSString *_identifier;
    NSString *_publisherID;
    double _score;
}

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *publisherID;
@property (nonatomic) double score;
@property (nonatomic) _Bool accessible;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithID:(id)arg1 publisherID:(id)arg2 score:(double)arg3 accessible:(_Bool)arg4;

@end
