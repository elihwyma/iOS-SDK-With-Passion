/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface PLContentChanges : NSObject

{
    NSMutableArray *_container;
    NSMutableArray *_updatedContent;
}

@property (retain, nonatomic) NSMutableArray *container;
@property (retain, nonatomic) NSMutableArray *updatedContent;

- (void)cleanupState;

@end
