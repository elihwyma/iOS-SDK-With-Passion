/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface _RESectionDescriptor : NSObject

{
    _Bool _invertRanking;
    _Bool _allowsSubsections;
    NSString *_name;
    long long _maxElementCount;
    NSArray *_rules;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) _Bool invertRanking;
@property (nonatomic) long long maxElementCount;
@property (copy, nonatomic) NSArray *rules;
@property (nonatomic, readonly) _Bool allowsSubsections;

- (id)initWithSectionDescriptor:(id)arg1;
- (id)initWithHistoricSectionDescriptor:(id)arg1;

@end
