/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <Foundation/NSObject.h>

@class NSIndexSet, NSString;

@interface CHTokenizedTextResultToken : NSObject

{
    NSString *_string;
    NSIndexSet *_strokeIndexes;
    unsigned int _wordID;
    double _recognitionScore;
    double _combinedScore;
    unsigned long long _properties;
    long long _substrokeCount;
}

@property (nonatomic, readonly) double recognitionScore;
@property (nonatomic, readonly) double combinedScore;
@property (nonatomic, readonly) unsigned long long properties;
@property (nonatomic, readonly) long long substrokeCount;
@property (nonatomic, readonly) unsigned int wordID;
@property (copy, nonatomic, readonly) NSString *string;
@property (copy, nonatomic, readonly) NSIndexSet *strokeIndexes;

+ (_Bool)supportsSecureCoding;
+ (id)tokenWithString:(id)arg1 strokeIndexes:(id)arg2 wordID:(unsigned int)arg3 recognitionScore:(double)arg4 combinedScore:(double)arg5 properties:(unsigned long long)arg6 substrokeCount:(long long)arg7;

- (id)init;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1 strokeIndexes:(id)arg2 wordID:(unsigned int)arg3 recognitionScore:(double)arg4 combinedScore:(double)arg5 properties:(unsigned long long)arg6 substrokeCount:(long long)arg7;
- (_Bool)isEqualToTokenizedTextResultToken:(id)arg1;
- (_Bool)isEquivalentToToken:(id)arg1;

@end
