/*
 Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface PUSceneDebugInspectorSceneViewModel : NSObject

{
    _Bool _isIndexed;
    unsigned int _sceneIdentifier;
    NSString *_keyword;
    double _threshold;
    NSArray *_synonyms;
    unsigned long long _count;
    unsigned long long _highConfidenceCount;
    double _libraryCoverage;
}

@property (nonatomic, readonly) NSString *keyword;
@property (nonatomic, readonly) unsigned int sceneIdentifier;
@property (nonatomic, readonly) _Bool isIndexed;
@property (nonatomic, readonly) double threshold;
@property (nonatomic, readonly) NSArray *synonyms;
@property (nonatomic) unsigned long long count;
@property (nonatomic) unsigned long long highConfidenceCount;
@property (nonatomic) double libraryCoverage;

- (id)description;
- (id)initWithKeyword:(id)arg1 synonyms:(id)arg2 sceneIdentifier:(unsigned int)arg3 indexed:(_Bool)arg4 threshold:(double)arg5;
- (id)concatenatedSynonyms;

@end
