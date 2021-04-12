//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class _PSEnsembleModel;

@interface _PSSuggesterConfiguration : NSObject <NSSecureCoding>
{
    long long _maximumNumberOfSuggestions;
    _PSEnsembleModel *_suggestionModel;
}

+ (BOOL)supportsSecureCoding;
+ (id)defaultConfiguration;
@property(retain, nonatomic) _PSEnsembleModel *suggestionModel; // @synthesize suggestionModel=_suggestionModel;
@property(nonatomic) long long maximumNumberOfSuggestions; // @synthesize maximumNumberOfSuggestions=_maximumNumberOfSuggestions;
// - (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

