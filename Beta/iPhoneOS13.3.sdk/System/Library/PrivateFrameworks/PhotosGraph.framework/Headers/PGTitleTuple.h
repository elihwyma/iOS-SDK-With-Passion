/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class NSArray, PGTitle;

@interface PGTitleTuple : NSObject

{
    PGTitle *_title;
    PGTitle *_subtitle;
    NSArray *_locationNames;
}

@property (nonatomic, readonly) PGTitle *title;
@property (nonatomic, readonly) PGTitle *subtitle;
@property (nonatomic, readonly) NSArray *locationNames;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithWithTitle:(id)arg1 subtitle:(id)arg2 locationNames:(id)arg3;
- (id)initWithWithTitle:(id)arg1 subtitle:(id)arg2;

@end
