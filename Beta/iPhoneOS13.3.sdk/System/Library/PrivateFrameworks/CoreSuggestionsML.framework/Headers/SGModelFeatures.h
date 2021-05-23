/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
 */

#import <Foundation/NSObject.h>

@class PMLSparseVector, SGModelSource;

@interface SGModelFeatures : NSObject

{
    SGModelSource *_source;
    PMLSparseVector *_vector;
}

- (id)source;
- (id)initWithSource:(id)arg1 vector:(id)arg2;
- (id)vector;
- (id)sessionDescriptor;

@end
