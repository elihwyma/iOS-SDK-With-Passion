/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface PLGreenController : NSObject

{
    NSDictionary *_currentGreenValues;
}

@property (nonatomic, readonly) NSDictionary *currentGreenValues;

- (id)init;
- (void)readValuesFromDisk;
- (_Bool)isGreenStateValid;
- (_Bool)greenValuesSimilarToGreenValues:(id)arg1;

@end
