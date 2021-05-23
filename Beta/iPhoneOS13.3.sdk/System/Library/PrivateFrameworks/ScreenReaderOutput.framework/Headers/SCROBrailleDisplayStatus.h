/*
 Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

#import <Foundation/NSObject.h>

@class NSData;

@interface SCROBrailleDisplayStatus : NSObject

{
    int _virtualAlignment;
    NSData *_realData;
    NSData *_virtualData;
    NSData *_aggregatedData;
    long long _masterStatusCellIndex;
}

@property (retain, nonatomic) NSData *realData;
@property (retain, nonatomic) NSData *virtualData;
@property (retain, nonatomic) NSData *aggregatedData;
@property (nonatomic) int virtualAlignment;
@property (nonatomic) long long masterStatusCellIndex;

@end
