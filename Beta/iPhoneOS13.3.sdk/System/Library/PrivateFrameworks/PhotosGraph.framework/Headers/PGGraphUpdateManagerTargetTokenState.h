/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class PHPersistentChangeToken;

@interface PGGraphUpdateManagerTargetTokenState : NSObject

{
    _Bool _encounteredTargetToken;
    PHPersistentChangeToken *_changeToken;
}

@property (nonatomic, readonly) PHPersistentChangeToken *changeToken;
@property (nonatomic) _Bool encounteredTargetToken;

- (id)description;
- (id)initWithPersistentChangeToken:(id)arg1;

@end
