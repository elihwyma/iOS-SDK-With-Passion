/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@interface PGTitleSpecArgument : NSObject

{
    _Bool _requiresInput;
    id _inputVariable;
}

@property _Bool requiresInput;
@property (retain) id inputVariable;

- (id)_resolvedStringWithMomentNodes:(id)arg1;
- (id)_resolvedStringWithMomentNodes:(id)arg1 features:(id)arg2;

@end
