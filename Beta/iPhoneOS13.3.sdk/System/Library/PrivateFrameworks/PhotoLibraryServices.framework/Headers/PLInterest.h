/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSKnownKeysMappingStrategy;

@interface PLInterest : NSObject

{
    NSKnownKeysMappingStrategy *_allKeysMappingStrategy;
    unsigned long long _indexesOfInterest;
}

@property (retain, nonatomic) NSKnownKeysMappingStrategy *allKeysMappingStrategy;
@property (nonatomic) unsigned long long indexesOfInterest;

@end
