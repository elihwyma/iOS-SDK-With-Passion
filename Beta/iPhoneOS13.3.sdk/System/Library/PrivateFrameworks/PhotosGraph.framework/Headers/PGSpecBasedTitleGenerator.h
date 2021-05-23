/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSSet, NSString, PGTitle, PGTitleSpecCollection;

@protocol PGSpecBasedTitleGeneratorDelegate;

@interface PGSpecBasedTitleGenerator : NSObject

{
    NSSet *_moments;
    NSSet *_features;
    PGTitleSpecCollection *_specCollection;
    PGTitle *_title;
    id <PGSpecBasedTitleGeneratorDelegate> _delegate;
    unsigned long long _lineBreakBehavior;
}

@property (retain, nonatomic) NSSet *moments;
@property (retain, nonatomic) NSSet *features;
@property (retain, nonatomic) PGTitleSpecCollection *specCollection;
@property (nonatomic, readonly) PGTitle *title;
@property (nonatomic) unsigned long long lineBreakBehavior;
@property (weak) id <PGSpecBasedTitleGeneratorDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)_title;
- (id)titleSpec:(id)arg1 inputForArgument:(id)arg2;
- (id)initWithMoments:(id)arg1 memoryCategory:(unsigned long long)arg2 subcategory:(unsigned long long)arg3;
- (id)initWithMoments:(id)arg1 meaningLabel:(id)arg2;
- (id)initWithMoments:(id)arg1 features:(id)arg2 meaningLabel:(id)arg3 isAggregation:(_Bool)arg4;
- (id)initWithMoments:(id)arg1 features:(id)arg2 specCollection:(id)arg3;
- (id)_titleFromSpecs:(id)arg1;

@end
