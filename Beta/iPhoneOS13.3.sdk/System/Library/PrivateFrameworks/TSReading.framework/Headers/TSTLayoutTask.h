/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, TSTMasterLayout;

@interface TSTLayoutTask : NSObject

{
    TSTMasterLayout *mMasterLayout;
    NSMutableArray *mCellStatesToLayout;
}

@property (retain, nonatomic) NSMutableArray *cellStatesToLayout;

- (void)dealloc;
- (id)initWithMasterLayout:(id)arg1;
- (void)flushToGlobalCaches;

@end
