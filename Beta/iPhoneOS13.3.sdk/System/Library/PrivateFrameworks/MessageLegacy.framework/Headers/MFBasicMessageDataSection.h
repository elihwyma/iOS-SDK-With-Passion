/*
 Image: /System/Library/PrivateFrameworks/MessageLegacy.framework/MessageLegacy
 */

#import <Foundation/NSObject.h>

@class MFDataHolder, NSString;

@interface MFBasicMessageDataSection : NSObject

{
    MFDataHolder *_dataHolder;
    _Bool _complete;
    _Bool _partial;
    NSString *_partName;
}

@property (nonatomic, getter=isPartial) _Bool partial;
@property (nonatomic, getter=isComplete) _Bool complete;
@property (retain, nonatomic) MFDataHolder *dataHolder;
@property (retain, nonatomic) NSString *partName;

- (void)dealloc;
- (void)setData:(id)arg1;

@end
