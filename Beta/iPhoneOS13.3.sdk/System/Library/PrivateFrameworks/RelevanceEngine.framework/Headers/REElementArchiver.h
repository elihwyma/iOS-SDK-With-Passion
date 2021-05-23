/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSObject.h>

@class RERelevanceEngine;

@interface REElementArchiver : NSObject

{
    RERelevanceEngine *_engine;
}

- (id)initWithEngine:(id)arg1;
- (id)elementWithData:(id)arg1;
- (id)_supportedClasses;
- (id)dataWithElement:(id)arg1;

@end
