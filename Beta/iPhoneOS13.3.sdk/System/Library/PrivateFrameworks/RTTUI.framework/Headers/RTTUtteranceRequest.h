/*
 Image: /System/Library/PrivateFrameworks/RTTUI.framework/RTTUI
 */

#import <Foundation/NSObject.h>

@class NSIndexPath, NSString, TUCall;

@interface RTTUtteranceRequest : NSObject

{
    unsigned long long _index;
    NSString *_string;
    NSIndexPath *_cellIndexPath;
    TUCall *_call;
}

@property (nonatomic) unsigned long long index;
@property (retain, nonatomic) NSString *string;
@property (weak, nonatomic) NSIndexPath *cellIndexPath;
@property (retain, nonatomic) TUCall *call;

+ (id)utteranceRequestWithIndex:(unsigned long long)arg1 forString:(id)arg2 inCellPath:(id)arg3 call:(id)arg4;

- (id)description;

@end
