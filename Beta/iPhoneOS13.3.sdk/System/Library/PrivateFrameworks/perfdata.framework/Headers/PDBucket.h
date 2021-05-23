/*
 Image: /System/Library/PrivateFrameworks/perfdata.framework/perfdata
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PDBucket : NSObject

{
    _Bool _hasInclusiveUpperBound;
    double _lowerInclusiveBound;
    double _upperBound;
    unsigned long long _count;
    NSString *_label;
}

@property (nonatomic) double lowerInclusiveBound;
@property (nonatomic) double upperBound;
@property (nonatomic) _Bool hasInclusiveUpperBound;
@property (nonatomic) unsigned long long count;
@property (retain, nonatomic) NSString *label;
@property (nonatomic) double lowerInclusiveBound;
@property (nonatomic) double upperBound;
@property (nonatomic) _Bool hasInclusiveUpperBound;
@property (nonatomic) unsigned long long count;
@property (retain, nonatomic) NSString *label;

- (id)initWithDictionary:(id)arg1 error:(id *)arg2;

@end
