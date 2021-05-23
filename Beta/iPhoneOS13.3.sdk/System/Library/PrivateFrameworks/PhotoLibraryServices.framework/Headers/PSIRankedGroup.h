/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class PSIGroup;

@interface PSIRankedGroup : NSObject

{
    PSIGroup *_group;
    double _score;
}

@property (nonatomic, readonly) PSIGroup *group;
@property (nonatomic) double score;

- (id)initWithGroup:(id)arg1 score:(double)arg2;

@end
