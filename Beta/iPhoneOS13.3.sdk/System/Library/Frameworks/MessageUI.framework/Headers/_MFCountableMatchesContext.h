/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <Foundation/NSObject.h>

@class NSMutableSet;

@interface _MFCountableMatchesContext : NSObject

{
    struct __CFDictionary *_peopleCount;
    NSMutableSet *_popularPeople;
    long long _maxCount;
}

@property (nonatomic) long long maxCount;

- (id)init;
- (void)dealloc;
- (void)countInstances:(id)arg1 usingPredicate:(CDUnknownBlockType)arg2;
- (id)highestMatches;

@end
