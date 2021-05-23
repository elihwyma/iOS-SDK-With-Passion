/*
 Image: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
 */

#import <NSObject.h>

@class _PSEnsembleModel;

@interface _PSSuggesterConfiguration : NSObject

{
    long long _maximumNumberOfSuggestions;
    _PSEnsembleModel *_suggestionModel;
}

@property (nonatomic) long long maximumNumberOfSuggestions;
@property (retain, nonatomic) _PSEnsembleModel *suggestionModel;

+ (_Bool)supportsSecureCoding;
+ (id)defaultConfiguration;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
