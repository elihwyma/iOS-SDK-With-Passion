/*
 Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

@interface PLChangeList : NSObject

{
    NSMutableSet *_inserted;
    NSMutableSet *_updated;
    NSMutableSet *_deleted;
}

@property (retain, nonatomic) NSMutableSet *inserted;
@property (retain, nonatomic) NSMutableSet *updated;
@property (retain, nonatomic) NSMutableSet *deleted;

- (void)cleanupState;

@end
